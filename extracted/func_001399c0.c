void func_001399c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001399c0: addiu $sp, $sp, -0x30
    if (s0 != 0) goto label_0x1399f8;                           // 0x001399e0: bnez $s0, 0x1399f8
    a1 = 0x22 << 16;                                            // 0x001399e8: lui $a1, 0x22
    goto label_0x139a18;                                        // 0x001399ec: b 0x139a18
    a1 = &str_00225468;  // "E0092913:nsct < 0.(dvCiReqRd)"     // 0x001399f0: addiu $a1, $a1, 0x5468
    /* nop */                                                   // 0x001399f4: nop 
label_0x1399f8:
    if (s2 >= 0) goto label_0x139a08;                           // 0x001399f8: bgez $s2, 0x139a08
    a1 = 0x22 << 16;                                            // 0x001399fc: lui $a1, 0x22
    goto label_0x139a18;                                        // 0x00139a00: b 0x139a18
    a1 = &str_00225480;  // "E0092914:buf is null.(dvCiReqRd)"  // 0x00139a04: addiu $a1, $a1, 0x5480
label_0x139a08:
    /* bnezl $s1, 0x139a28 */                                   // 0x00139a08: bnezl $s1, 0x139a28
    v1 = *(int8_t*)((s0) + 2);                                  // 0x00139a0c: lb $v1, 2($s0)
    a1 = 0x22 << 16;                                            // 0x00139a10: lui $a1, 0x22
    a1 = &str_002254a0;  // "DVCI: dvCiStopTr timeout. (10sec)\r\n" // 0x00139a14: addiu $a1, $a1, 0x54a0
label_0x139a18:
    func_001392e8();  // 0x1392b8                                // 0x00139a18: jal 0x1392b8
    /* nop */                                                   // 0x00139a1c: nop 
    goto label_0x139b48;                                        // 0x00139a20: b 0x139b48
    s3 = 2;                                                     // 0x00139a28: addiu $s3, $zero, 2
    if (v1 == s3) goto label_0x139b48;                          // 0x00139a2c: beq $v1, $s3, 0x139b48
    if (s2 != 0) goto label_0x139a48;                           // 0x00139a34: bnez $s2, 0x139a48
    v1 = 1;                                                     // 0x00139a38: addiu $v1, $zero, 1
    goto label_0x139b48;                                        // 0x00139a3c: b 0x139b48
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x00139a40: sb $v1, 2($s0)
    /* nop */                                                   // 0x00139a44: nop 
label_0x139a48:
    func_00137088();  // 0x137000                                // 0x00139a48: jal 0x137000
    /* nop */                                                   // 0x00139a4c: nop 
    if (v1 == 0) goto label_0x139b48;                           // 0x00139a54: beqz $v1, 0x139b48
    *(uint32_t*)((s0) + 0x1c) = v1;                             // 0x00139a58: sw $v1, 0x1c($s0)
    a2 = 0x20 << 16;                                            // 0x00139a5c: lui $a2, 0x20
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x00139a60: lw $v0, 0xc($s0)
    a2 = a2 + 0x3ee0;                                           // 0x00139a64: addiu $a2, $a2, 0x3ee0
    v1 = *(int32_t*)((s0) + 8);                                 // 0x00139a68: lw $v1, 8($s0)
    a1 = g_00203ee0;  // Global at 0x00203ee0                   // 0x00139a6c: lbu $a1, 0($a2)
    v1 = v1 - v0;                                               // 0x00139a74: subu $v1, $v1, $v0
    *(uint8_t*)((s0) + 0x44) = a1;                              // 0x00139a7c: sb $a1, 0x44($s0)
    v0 = (s2 < v1) ? 1 : 0;                                     // 0x00139a80: slt $v0, $s2, $v1
    if (v0 == 0) a3 = v1;                                       // 0x00139a84: movz $a3, $v1, $v0
    t0 = g_00203ee1;  // Global at 0x00203ee1                   // 0x00139a88: lbu $t0, 1($a2)
    a1 = a3 << 0xb;                                             // 0x00139a8c: sll $a1, $a3, 0xb
    a1 = s1 + a1;                                               // 0x00139a90: addu $a1, $s1, $a1
    *(uint8_t*)((s0) + 0x45) = t0;                              // 0x00139a94: sb $t0, 0x45($s0)
    a1 = a1 + -1;                                               // 0x00139a98: addiu $a1, $a1, -1
    v0 = g_00203ee2;  // Global at 0x00203ee2                   // 0x00139a9c: lbu $v0, 2($a2)
    *(uint32_t*)((s0) + 0x10) = a3;                             // 0x00139aa0: sw $a3, 0x10($s0)
    *(uint8_t*)((s0) + 0x46) = v0;                              // 0x00139aa4: sb $v0, 0x46($s0)
    func_00114dc0();  // 0x114d18                                // 0x00139aa8: jal 0x114d18
    *(uint32_t*)((s0) + 0x18) = s1;                             // 0x00139aac: sw $s1, 0x18($s0)
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x00139ab0: lw $v0, 0x20($s0)
    a1 = *(int32_t*)((s0) + 0xc);                               // 0x00139ab4: lw $a1, 0xc($s0)
    t0 = s0 + 0x44;                                             // 0x00139ab8: addiu $t0, $s0, 0x44
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x00139abc: lw $a0, 0x1c($s0)
    a2 = *(int32_t*)((s0) + 0x10);                              // 0x00139ac0: lw $a2, 0x10($s0)
    a1 = v0 + a1;                                               // 0x00139ac4: addu $a1, $v0, $a1
    func_00137218();  // 0x137128                                // 0x00139ac8: jal 0x137128
    a3 = *(int32_t*)((s0) + 0x18);                              // 0x00139acc: lw $a3, 0x18($s0)
    /* bnezl $v0, 0x139ae8 */                                   // 0x00139ad0: bnezl $v0, 0x139ae8
    v0 = 0x20 << 16;                                            // 0x00139ad4: lui $v0, 0x20
    func_00137128();  // 0x137088                                // 0x00139ad8: jal 0x137088
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x00139adc: lw $a0, 0x1c($s0)
    goto label_0x139b48;                                        // 0x00139ae0: b 0x139b48
    v1 = 1;                                                     // 0x00139ae8: addiu $v1, $zero, 1
    s1 = g_00203ee4;  // Global at 0x00203ee4                   // 0x00139aec: lw $s1, 0x3ee4($v0)
    if (s1 != v1) goto label_0x139b40;                          // 0x00139af0: bnel $s1, $v1, 0x139b40
    *(uint8_t*)((s0) + 2) = s3;                                 // 0x00139af4: sb $s3, 2($s0)
    func_00100e38();  // 0x100d98                                // 0x00139af8: jal 0x100d98
    func_00137bb8();  // 0x137b50                                // 0x00139b00: jal 0x137b50
    /* nop */                                                   // 0x00139b04: nop 
    func_00137b50();  // 0x137a40                                // 0x00139b08: jal 0x137a40
    /* nop */                                                   // 0x00139b0c: nop 
    func_00137508();  // 0x1373f8                                // 0x00139b10: jal 0x1373f8
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x00139b14: lw $a0, 0x1c($s0)
    func_00137128();  // 0x137088                                // 0x00139b18: jal 0x137088
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x00139b1c: lw $a0, 0x1c($s0)
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x00139b20: sw $zero, 0x1c($s0)
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x00139b24: lw $v0, 0xc($s0)
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x00139b28: lw $v1, 0x10($s0)
    *(uint32_t*)((s0) + 0x14) = s2;                             // 0x00139b2c: sw $s2, 0x14($s0)
    v0 = v0 + v1;                                               // 0x00139b30: addu $v0, $v0, $v1
    *(uint8_t*)((s0) + 2) = s1;                                 // 0x00139b34: sb $s1, 2($s0)
    goto label_0x139b44;                                        // 0x00139b38: b 0x139b44
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x00139b3c: sw $v0, 0xc($s0)
label_0x139b40:
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x00139b40: lw $v1, 0x10($s0)
label_0x139b44:
label_0x139b48:
    return;                                                     // 0x00139b5c: jr $ra
    sp = sp + 0x30;                                             // 0x00139b60: addiu $sp, $sp, 0x30
}