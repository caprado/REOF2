void func_0013a920() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0013a920: addiu $sp, $sp, -0x40
    v0 = 0x25 << 16;                                            // 0x0013a924: lui $v0, 0x25
    a2 = 0x1000;                                                // 0x0013a944: addiu $a2, $zero, 0x1000
    a0 = v0 + 0x3d40;                                           // 0x0013a948: addiu $a0, $v0, 0x3d40
    func_00107c70();  // 107c70                                // 0x0013a960: jal 0x107c70
    v1 = 0x20 << 16;                                            // 0x0013a968: lui $v1, 0x20
    v0 = g_00203ed0;  // Global at 0x00203ed0                   // 0x0013a96c: lw $v0, 0x3ed0($v1)
    if (v0 == 0) goto label_0x13a980;                           // 0x0013a970: beqz $v0, 0x13a980
    /* nop */                                                   // 0x0013a974: nop 
    func_0013a698();  // 13a698                                // 0x0013a978: jal 0x13a698
    /* nop */                                                   // 0x0013a97c: nop 
label_0x13a980:
    if (s4 == 0) goto label_0x13a9a0;                           // 0x0013a980: beqz $s4, 0x13a9a0
    /* nop */                                                   // 0x0013a984: nop 
    if (s2 == 0) goto label_0x13a9a0;                           // 0x0013a988: beqz $s2, 0x13a9a0
    /* nop */                                                   // 0x0013a98c: nop 
    if (s3 == 0) goto label_0x13a9a0;                           // 0x0013a990: beqz $s3, 0x13a9a0
    /* nop */                                                   // 0x0013a994: nop 
    if (s1 != 0) goto label_0x13a9a8;                           // 0x0013a998: bnez $s1, 0x13a9a8
    /* nop */                                                   // 0x0013a99c: nop 
label_0x13a9a0:
    func_0013a698();  // 13a698                                // 0x0013a9a0: jal 0x13a698
    /* nop */                                                   // 0x0013a9a4: nop 
label_0x13a9a8:
    if (s4 == 0) goto label_0x13aa64;                           // 0x0013a9a8: beqz $s4, 0x13aa64
    if (s2 != 0) goto label_0x13a9d8;                           // 0x0013a9b0: bnez $s2, 0x13a9d8
    v0 = 0x20 << 16;                                            // 0x0013a9b4: lui $v0, 0x20
    v1 = g_00203ee8;  // Global at 0x00203ee8                   // 0x0013a9b8: lw $v1, 0x3ee8($v0)
    if (v1 != 0) goto label_0x13aa64;                           // 0x0013a9bc: bnez $v1, 0x13aa64
    a0 = 0x22 << 16;                                            // 0x0013a9c4: lui $a0, 0x22
    goto label_0x13aa04;                                        // 0x0013a9cc: b 0x13aa04
    a0 = &str_002255b0;  // "DVCI: Invalidate filelist buffer size.\r\n" // 0x0013a9d0: addiu $a0, $a0, 0x55b0
    /* nop */                                                   // 0x0013a9d4: nop 
label_0x13a9d8:
    if (s3 == 0) goto label_0x13a9f0;                           // 0x0013a9d8: beqz $s3, 0x13a9f0
    v1 = g_00203ee8;  // Global at 0x00203ee8                   // 0x0013a9dc: lw $v1, 0x3ee8($v0)
    if (s1 != 0) goto label_0x13aa18;                           // 0x0013a9e0: bnez $s1, 0x13aa18
    s0 = s5 + 9;                                                // 0x0013a9e4: addiu $s0, $s5, 9
    v0 = 0x20 << 16;                                            // 0x0013a9e8: lui $v0, 0x20
    v1 = g_00203ee8;  // Global at 0x00203ee8                   // 0x0013a9ec: lw $v1, 0x3ee8($v0)
label_0x13a9f0:
    if (v1 != 0) goto label_0x13aa64;                           // 0x0013a9f0: bnez $v1, 0x13aa64
    a0 = 0x22 << 16;                                            // 0x0013a9f8: lui $a0, 0x22
    a0 = &str_002255e0;  // "DVCI: Can't read filelist file.(%s)\n" // 0x0013aa00: addiu $a0, $a0, 0x55e0
label_0x13aa04:
    func_00116508();  // 116508                                // 0x0013aa04: jal 0x116508
    /* nop */                                                   // 0x0013aa08: nop 
    goto label_0x13aa64;                                        // 0x0013aa0c: b 0x13aa64
    /* nop */                                                   // 0x0013aa14: nop 
label_0x13aa18:
    /* divide: s1 / s0 -> hi:lo */                              // 0x0013aa1c: divu $zero, $s1, $s0
    /* beqzl $s0, 0x13aa34 */                                   // 0x0013aa2c: beqzl $s0, 0x13aa34
    /* break (trap) */                                          // 0x0013aa30: break 0, 7
    /* mflo $s1 */                                              // 0x0013aa34
    func_0013a0d8();  // 13a0d8                                // 0x0013aa3c: jal 0x13a0d8
    s1 = s1 << 3;                                               // 0x0013aa40: sll $s1, $s1, 3
    func_0013a3f8();  // 13a3f8                                // 0x0013aa48: jal 0x13a3f8
    /* beqzl $s0, 0x13aa58 */                                   // 0x0013aa50: beqzl $s0, 0x13aa58
    /* break (trap) */                                          // 0x0013aa54: break 0, 7
    v1 = s5 + 1;                                                // 0x0013aa58: addiu $v1, $s5, 1
    /* multiply: v0 * v1 -> hi:lo */                            // 0x0013aa5c: mult $ac2, $v0, $v1
    v0 = s1 + v0;                                               // 0x0013aa60: addu $v0, $s1, $v0
label_0x13aa64:
    return;                                                     // 0x0013aa80: jr $ra
    sp = sp + 0x40;                                             // 0x0013aa84: addiu $sp, $sp, 0x40
}