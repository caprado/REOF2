void func_00168a80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00168a80: addiu $sp, $sp, -0x30
    if (s0 <= 0) goto label_0x168bc0;                           // 0x00168aa4: blez $s0, 0x168bc0
    v0 = 0x23 << 16;                                            // 0x00168aac: lui $v0, 0x23
    v1 = 0x23 << 16;                                            // 0x00168ab0: lui $v1, 0x23
    s3 = v0 + -0x7148;                                          // 0x00168ab4: addiu $s3, $v0, -0x7148
    s4 = v1 + -0x6f20;                                          // 0x00168ab8: addiu $s4, $v1, -0x6f20
label_0x168ac0:
    func_00158518();  // 0x158410                                // 0x00168ac4: jal 0x158410
    a2 = 0x40;                                                  // 0x00168ac8: addiu $a2, $zero, 0x40
    if (a1 == 0) goto label_0x168bc4;                           // 0x00168ad0: beqz $a1, 0x168bc4
    a0 = a1 - s1;                                               // 0x00168ad4: subu $a0, $a1, $s1
    a2 = *(uint8_t*)((a1) + 7);                                 // 0x00168ad8: lbu $a2, 7($a1)
    a0 = a0 + 1;                                                // 0x00168adc: addiu $a0, $a0, 1
    s0 = s0 - a0;                                               // 0x00168ae0: subu $s0, $s0, $a0
    s1 = s1 + a0;                                               // 0x00168ae4: addu $s1, $s1, $a0
    v1 = (unsigned)a2 >> 4;                                     // 0x00168ae8: srl $v1, $a2, 4
    a2 = a2 & 0xf;                                              // 0x00168aec: andi $a2, $a2, 0xf
    v0 = a2 + 0xff;                                             // 0x00168af0: addiu $v0, $a2, 0xff
    t4 = *(uint8_t*)((a1) + 0xb);                               // 0x00168af4: lbu $t4, 0xb($a1)
    v0 = v0 & 0xff;                                             // 0x00168af8: andi $v0, $v0, 0xff
    a3 = *(uint8_t*)((a1) + 0xa);                               // 0x00168afc: lbu $a3, 0xa($a1)
    v0 = ((unsigned)v0 < (unsigned)8) ? 1 : 0;                  // 0x00168b00: sltiu $v0, $v0, 8
    t0 = *(uint8_t*)((a1) + 4);                                 // 0x00168b04: lbu $t0, 4($a1)
    a0 = *(uint8_t*)((a1) + 5);                                 // 0x00168b08: lbu $a0, 5($a1)
    t1 = *(uint8_t*)((a1) + 6);                                 // 0x00168b0c: lbu $t1, 6($a1)
    t2 = *(uint8_t*)((a1) + 8);                                 // 0x00168b10: lbu $t2, 8($a1)
    if (v1 == 0) goto label_0x168bb8;                           // 0x00168b14: beqz $v1, 0x168bb8
    t3 = *(uint8_t*)((a1) + 9);                                 // 0x00168b18: lbu $t3, 9($a1)
    if (v0 == 0) goto label_0x168bb8;                           // 0x00168b1c: beqz $v0, 0x168bb8
    v0 = (unsigned)a3 >> 5;                                     // 0x00168b20: srl $v0, $a3, 5
    v0 = v0 & 1;                                                // 0x00168b24: andi $v0, $v0, 1
    v0 = v0 & 0xff;                                             // 0x00168b28: andi $v0, $v0, 0xff
    if (v0 == 0) goto label_0x168bb8;                           // 0x00168b2c: beqz $v0, 0x168bb8
    v0 = a0 & 0xf;                                              // 0x00168b30: andi $v0, $a0, 0xf
    a0 = (unsigned)a0 >> 4;                                     // 0x00168b34: srl $a0, $a0, 4
    v1 = t0 << 4;                                               // 0x00168b38: sll $v1, $t0, 4
    v0 = v0 << 8;                                               // 0x00168b3c: sll $v0, $v0, 8
    a1 = *(int32_t*)((s2) + 0x1c);                              // 0x00168b40: lw $a1, 0x1c($s2)
    v1 = v1 | a0;                                               // 0x00168b44: or $v1, $v1, $a0
    v0 = v0 | t1;                                               // 0x00168b48: or $v0, $v0, $t1
    *(uint32_t*)((s2) + 0x14) = v1;                             // 0x00168b4c: sw $v1, 0x14($s2)
    if (a1 != 0) goto label_0x168b84;                           // 0x00168b50: bnez $a1, 0x168b84
    *(uint32_t*)((s2) + 0x18) = v0;                             // 0x00168b54: sw $v0, 0x18($s2)
    v0 = t3 << 2;                                               // 0x00168b58: sll $v0, $t3, 2
    v1 = t2 << 0xa;                                             // 0x00168b5c: sll $v1, $t2, 0xa
    v1 = v1 | v0;                                               // 0x00168b60: or $v1, $v1, $v0
    a0 = (unsigned)a3 >> 6;                                     // 0x00168b64: srl $a0, $a3, 6
    v1 = v1 | a0;                                               // 0x00168b68: or $v1, $v1, $a0
    v0 = v1 << 1;                                               // 0x00168b6c: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x00168b70: addu $v0, $v0, $v1
    v0 = v0 << 3;                                               // 0x00168b74: sll $v0, $v0, 3
    v0 = v0 + v1;                                               // 0x00168b78: addu $v0, $v0, $v1
    v0 = v0 << 1;                                               // 0x00168b7c: sll $v0, $v0, 1
    *(uint32_t*)((s2) + 0x1c) = v0;                             // 0x00168b80: sw $v0, 0x1c($s2)
label_0x168b84:
    v1 = a2 << 2;                                               // 0x00168b84: sll $v1, $a2, 2
    v0 = a3 & 0x1f;                                             // 0x00168b88: andi $v0, $a3, 0x1f
    v1 = v1 + s3;                                               // 0x00168b8c: addu $v1, $v1, $s3
    v0 = v0 << 5;                                               // 0x00168b90: sll $v0, $v0, 5
    a0 = (unsigned)t4 >> 3;                                     // 0x00168b94: srl $a0, $t4, 3
    a1 = g_00230000;  // Global at 0x00230000                   // 0x00168b98: lw $a1, 0($v1)
    v0 = v0 | a0;                                               // 0x00168b9c: or $v0, $v0, $a0
    *(uint32_t*)((s2) + 8) = s4;                                // 0x00168ba0: sw $s4, 8($s2)
    v0 = v0 << 0xb;                                             // 0x00168ba4: sll $v0, $v0, 0xb
    *(uint32_t*)((s2) + 0x20) = a1;                             // 0x00168ba8: sw $a1, 0x20($s2)
    goto label_0x168bc0;                                        // 0x00168bac: b 0x168bc0
    *(uint32_t*)((s2) + 0x24) = v0;                             // 0x00168bb0: sw $v0, 0x24($s2)
    /* nop */                                                   // 0x00168bb4: nop 
label_0x168bb8:
    if (s0 > 0) goto label_0x168ac0;                            // 0x00168bb8: bgtz $s0, 0x168ac0
label_0x168bc0:
    v0 = 1;                                                     // 0x00168bc0: addiu $v0, $zero, 1
label_0x168bc4:
    return;                                                     // 0x00168bdc: jr $ra
    sp = sp + 0x30;                                             // 0x00168be0: addiu $sp, $sp, 0x30
}