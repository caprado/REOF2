void func_00116b48() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_8;
    
    sp = sp + -0xa0;                                            // 0x00116b48: addiu $sp, $sp, -0xa0
    v1 = 0x25 << 16;                                            // 0x00116b4c: lui $v1, 0x25
    s1 = v1 + -0x38e8;                                          // 0x00116b58: addiu $s1, $v1, -0x38e8
    a3 = g_0024c718;  // Global at 0x0024c718                   // 0x00116b60: lw $a3, -0x38e8($v1)
    v0 = *(uint8_t*)(a3);                                       // 0x00116b64: lbu $v0, 0($a3)
    a1 = v0 & 0xff;                                             // 0x00116b68: andi $a1, $v0, 0xff
    if (a1 == 0) goto label_0x116c7c;                           // 0x00116b6c: beqz $a1, 0x116c7c
    v0 = a1 + 0xf;                                              // 0x00116b74: addiu $v0, $a1, 0xf
    v1 = -1;                                                    // 0x00116b78: addiu $v1, $zero, -1
    a0 = a1 + 0x1e;                                             // 0x00116b7c: addiu $a0, $a1, 0x1e
    v1 = (v1 < v0) ? 1 : 0;                                     // 0x00116b80: slt $v1, $v1, $v0
    if (v1 != 0) a0 = v0;                                       // 0x00116b84: movn $a0, $v0, $v1
    a1 = a0 >> 4;                                               // 0x00116b8c: sra $a1, $a0, 4
    *(uint8_t*)(a3) = 0;                                        // 0x00116b90: sb $zero, 0($a3)
    if (a1 <= 0) goto label_0x116bbc;                           // 0x00116b94: blez $a1, 0x116bbc
label_0x116ba0:
    /* FPU: andi.b $w0, $w0, 0xc2 */                            // 0x00116ba0: andi.b $w0, $w0, 0xc2
    a0 = a0 + -1;                                               // 0x00116ba4: addiu $a0, $a0, -1
    a2 = a2 + 0x10;                                             // 0x00116ba8: addiu $a2, $a2, 0x10
    v1 = v1 + 0x10;                                             // 0x00116bb0: addiu $v1, $v1, 0x10
    if (a0 != 0) goto label_0x116ba0;                           // 0x00116bb4: bnez $a0, 0x116ba0
    /* nop */                                                   // 0x00116bb8: nop 
label_0x116bbc:
    sceSifSetReg();  // 0x1146d0                                // 0x00116bbc: jal 0x1146d0
    /* nop */                                                   // 0x00116bc0: nop 
    v1 = local_8;                                               // 0x00116bc4: lw $v1, 8($sp)
    if (v1 >= 0) goto label_0x116c1c;                           // 0x00116bc8: bgez $v1, 0x116c1c
    /* nop */                                                   // 0x00116bcc: nop 
    v0 = local_8;                                               // 0x00116bd0: lw $v0, 8($sp)
    v1 = 0x7fff << 16;                                          // 0x00116bd4: lui $v1, 0x7fff
    v1 = v1 | 0xffff;                                           // 0x00116bd8: ori $v1, $v1, 0xffff
    a0 = g_0024c728;  // Global at 0x0024c728                   // 0x00116bdc: lw $a0, 0x10($s1)
    a1 = v0 & v1;                                               // 0x00116be0: and $a1, $v0, $v1
    a0 = (a1 < a0) ? 1 : 0;                                     // 0x00116be4: slt $a0, $a1, $a0
    if (a0 == 0) goto label_0x116c70;                           // 0x00116be8: beqz $a0, 0x116c70
    v0 = 0xc;                                                   // 0x00116bec: addiu $v0, $zero, 0xc
    v1 = g_0024c724;  // Global at 0x0024c724                   // 0x00116bf0: lw $v1, 0xc($s1)
    v0 = a1 + v1;                                               // 0x00116bf8: addu $v0, $a1, $v1
    a2 = *(int32_t*)(v0);                                       // 0x00116bfc: lw $a2, 0($v0)
    if (a2 == 0) goto label_0x116c70;                           // 0x00116c00: beqz $a2, 0x116c70
    /* nop */                                                   // 0x00116c04: nop 
    v1 = *(int32_t*)((v0) + 8);                                 // 0x00116c08: lw $v1, 8($v0)
    goto label_0x116c58;                                        // 0x00116c14: b 0x116c58
    v0 = g_0024c724;  // Global at 0x0024c724                   // 0x00116c18: lw $v0, 0xc($s1)
label_0x116c1c:
    a1 = local_8;                                               // 0x00116c1c: lw $a1, 8($sp)
    v0 = g_0024c730;  // Global at 0x0024c730                   // 0x00116c20: lw $v0, 0x18($s1)
    v0 = (a1 < v0) ? 1 : 0;                                     // 0x00116c24: slt $v0, $a1, $v0
    if (v0 == 0) goto label_0x116c70;                           // 0x00116c28: beqz $v0, 0x116c70
    v0 = 0xc;                                                   // 0x00116c2c: addiu $v0, $zero, 0xc
    v1 = g_0024c72c;  // Global at 0x0024c72c                   // 0x00116c30: lw $v1, 0x14($s1)
    v0 = a1 + v1;                                               // 0x00116c38: addu $v0, $a1, $v1
    a2 = *(int32_t*)(v0);                                       // 0x00116c3c: lw $a2, 0($v0)
    if (a2 == 0) goto label_0x116c70;                           // 0x00116c40: beqz $a2, 0x116c70
    /* nop */                                                   // 0x00116c44: nop 
    v1 = *(int32_t*)((v0) + 8);                                 // 0x00116c48: lw $v1, 8($v0)
    v0 = g_0024c72c;  // Global at 0x0024c72c                   // 0x00116c54: lw $v0, 0x14($s1)
label_0x116c58:
    v0 = a1 + v0;                                               // 0x00116c5c: addu $v0, $a1, $v0
    /* call function at address in a2 */                        // 0x00116c60: jalr $a2
    a1 = *(int32_t*)((v0) + 4);                                 // 0x00116c64: lw $a1, 4($v0)
label_0x116c70:
    /* memory sync */                                           // 0x00116c70: sync 
label_0x116c7c:
    return;                                                     // 0x00116c88: jr $ra
    sp = sp + 0xa0;                                             // 0x00116c8c: addiu $sp, $sp, 0xa0
}