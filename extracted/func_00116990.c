void func_00116990() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8, local_c;
    
    sp = sp + -0x80;                                            // 0x00116990: addiu $sp, $sp, -0x80
    v0 = s1 + -0x10;                                            // 0x001169ac: addiu $v0, $s1, -0x10
    v0 = ((unsigned)v0 < (unsigned)0x61) ? 1 : 0;               // 0x001169c4: sltiu $v0, $v0, 0x61
    if (v0 != 0) goto label_0x1169d8;                           // 0x001169c8: bnez $v0, 0x1169d8
    goto label_0x116aa4;                                        // 0x001169d0: b 0x116aa4
label_0x1169d8:
    if (a1 <= 0) goto label_0x116a20;                           // 0x001169d8: blez $a1, 0x116a20
    v0 = *(uint8_t*)(s0);                                       // 0x001169e0: lbu $v0, 0($s0)
    v1 = a1 << 8;                                               // 0x001169e4: sll $v1, $a1, 8
    *(uint32_t*)((s0) + 4) = t1;                                // 0x001169e8: sw $t1, 4($s0)
    s2 = 1;                                                     // 0x001169ec: addiu $s2, $zero, 1
    v0 = v0 | v1;                                               // 0x001169f0: or $v0, $v0, $v1
    local_0 = a0;                                               // 0x001169f4: sw $a0, 0($sp)
    *(uint32_t*)(s0) = v0;                                      // 0x001169f8: sw $v0, 0($s0)
    v1 = s3 & 4;                                                // 0x001169fc: andi $v1, $s3, 4
    local_4 = t1;                                               // 0x00116a00: sw $t1, 4($sp)
    local_8 = a1;                                               // 0x00116a04: sw $a1, 8($sp)
    if (v1 == 0) goto label_0x116a2c;                           // 0x00116a08: beqz $v1, 0x116a2c
    local_c = 0;                                                // 0x00116a0c: sw $zero, 0xc($sp)
    func_00116c90();  // 116c90                                // 0x00116a10: jal 0x116c90
    /* nop */                                                   // 0x00116a14: nop 
    goto label_0x116a30;                                        // 0x00116a18: b 0x116a30
    a1 = s2 << 4;                                               // 0x00116a1c: sll $a1, $s2, 4
label_0x116a20:
    v0 = *(uint8_t*)(s0);                                       // 0x00116a20: lbu $v0, 0($s0)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x00116a24: sw $zero, 4($s0)
    *(uint32_t*)(s0) = v0;                                      // 0x00116a28: sw $v0, 0($s0)
label_0x116a2c:
    a1 = s2 << 4;                                               // 0x00116a2c: sll $a1, $s2, 4
label_0x116a30:
    v0 = 0x25 << 16;                                            // 0x00116a30: lui $v0, 0x25
    a0 = g_0024c720;  // Global at 0x0024c720                   // 0x00116a34: lw $a0, -0x38e0($v0)
    v1 = sp + a1;                                               // 0x00116a38: addu $v1, $sp, $a1
    *(uint32_t*)(v1) = s0;                                      // 0x00116a3c: sw $s0, 0($v1)
    v0 = sp + 4;                                                // 0x00116a40: addiu $v0, $sp, 4
    v0 = v0 + a1;                                               // 0x00116a44: addu $v0, $v0, $a1
    v1 = sp + 8;                                                // 0x00116a48: addiu $v1, $sp, 8
    g_00250000 = a0;  // Global at 0x00250000                   // 0x00116a4c: sw $a0, 0($v0)
    v1 = v1 + a1;                                               // 0x00116a50: addu $v1, $v1, $a1
    *(uint32_t*)(v1) = s1;                                      // 0x00116a54: sw $s1, 0($v1)
    a0 = sp + 0xc;                                              // 0x00116a58: addiu $a0, $sp, 0xc
    a0 = a0 + a1;                                               // 0x00116a5c: addu $a0, $a0, $a1
    *(uint32_t*)((s0) + 8) = s4;                                // 0x00116a60: sw $s4, 8($s0)
    *(uint8_t*)(s0) = s1;                                       // 0x00116a64: sb $s1, 0($s0)
    v0 = 0x44;                                                  // 0x00116a68: addiu $v0, $zero, 0x44
    *(uint32_t*)(a0) = v0;                                      // 0x00116a6c: sw $v0, 0($a0)
    func_00116c90();  // 116c90                                // 0x00116a78: jal 0x116c90
    s2 = s2 + 1;                                                // 0x00116a7c: addiu $s2, $s2, 1
    v0 = s3 & 1;                                                // 0x00116a80: andi $v0, $s3, 1
    if (v0 == 0) goto label_0x116a9c;                           // 0x00116a84: beqz $v0, 0x116a9c
    sceSifSetDChain();  // 0x1146b0                             // 0x00116a8c: jal 0x1146b0
    goto label_0x116aa8;                                        // 0x00116a94: b 0x116aa8
label_0x116a9c:
    isceSifSetDma();  // 0x1146a0                               // 0x00116a9c: jal 0x1146a0
label_0x116aa4:
label_0x116aa8:
    return;                                                     // 0x00116abc: jr $ra
    sp = sp + 0x80;                                             // 0x00116ac0: addiu $sp, $sp, 0x80
}