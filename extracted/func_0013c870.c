void func_0013c870() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0013c870: addiu $sp, $sp, -0x30
    if (s1 != 0) goto label_0x13c8a0;                           // 0x0013c884: bnez $s1, 0x13c8a0
    a0 = 0x22 << 16;                                            // 0x0013c88c: lui $a0, 0x22
    func_0013d1b8();  // 13d1b8                                // 0x0013c890: jal 0x13d1b8
    a0 = &str_00225b88;  // "E0002: Not enough instance (LSC_Create)\n" // 0x0013c894: addiu $a0, $a0, 0x5b88
    goto label_0x13c960;                                        // 0x0013c898: b 0x13c960
label_0x13c8a0:
    func_0013d158();  // 13d158                                // 0x0013c8a0: jal 0x13d158
    func_0013c810();  // 13c810                                // 0x0013c8a8: jal 0x13c810
    /* nop */                                                   // 0x0013c8ac: nop 
    /* bnezl $s2, 0x13c8d0 */                                   // 0x0013c8b4: bnezl $s2, 0x13c8d0
    *(uint8_t*)((s2) + 1) = 0;                                  // 0x0013c8b8: sb $zero, 1($s2)
    a0 = 0x22 << 16;                                            // 0x0013c8bc: lui $a0, 0x22
    func_0013d1b8();  // 13d1b8                                // 0x0013c8c0: jal 0x13d1b8
    a0 = &str_00225bb8;  // "E0003: Illigal parameter lsc=NULL\n" // 0x0013c8c4: addiu $a0, $a0, 0x5bb8
    goto label_0x13c954;                                        // 0x0013c8c8: b 0x13c954
    /* nop */                                                   // 0x0013c8cc: nop 
    *(uint32_t*)((s2) + 8) = s1;                                // 0x0013c8d4: sw $s1, 8($s2)
    v1 = *(int32_t*)(s1);                                       // 0x0013c8d8: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x0013c8dc: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x0013c8e0: jalr $v0
    v1 = *(int32_t*)(s1);                                       // 0x0013c8e8: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x0013c8f4: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x0013c8f8: jalr $v0
    a1 = 1;                                                     // 0x0013c8fc: addiu $a1, $zero, 1
    v1 = 0xa;                                                   // 0x0013c900: addiu $v1, $zero, 0xa
    s0 = s0 + v0;                                               // 0x0013c904: addu $s0, $s0, $v0
    a0 = 0xf;                                                   // 0x0013c908: addiu $a0, $zero, 0xf
    v0 = s0 << 3;                                               // 0x0013c90c: sll $v0, $s0, 3
    *(uint32_t*)((s2) + 0x18) = s0;                             // 0x0013c910: sw $s0, 0x18($s2)
    /* divide: v0 / v1 -> hi:lo */                              // 0x0013c914: div $zero, $v0, $v1
    /* beqzl $v1, 0x13c920 */                                   // 0x0013c918: beqzl $v1, 0x13c920
    /* break (trap) */                                          // 0x0013c91c: break 0, 7
    v1 = s2 + 0x230;                                            // 0x0013c920: addiu $v1, $s2, 0x230
    /* mflo $v0 */                                              // 0x0013c924
    *(uint32_t*)((s2) + 0x14) = v0;                             // 0x0013c928: sw $v0, 0x14($s2)
    /* nop */                                                   // 0x0013c92c: nop 
label_0x13c930:
    a0 = a0 + -1;                                               // 0x0013c930: addiu $a0, $a0, -1
    *(uint32_t*)(v1) = 0;                                       // 0x0013c934: sw $zero, 0($v1)
    /* nop */                                                   // 0x0013c938: nop 
    /* nop */                                                   // 0x0013c93c: nop 
    /* nop */                                                   // 0x0013c940: nop 
    if (a0 >= 0) goto label_0x13c930;                           // 0x0013c944: bgez $a0, 0x13c930
    v1 = v1 + -0x20;                                            // 0x0013c948: addiu $v1, $v1, -0x20
    v0 = 1;                                                     // 0x0013c94c: addiu $v0, $zero, 1
    *(uint8_t*)(s2) = v0;                                       // 0x0013c950: sb $v0, 0($s2)
label_0x13c954:
    func_0013d178();  // 13d178                                // 0x0013c954: jal 0x13d178
label_0x13c960:
    return;                                                     // 0x0013c970: jr $ra
    sp = sp + 0x30;                                             // 0x0013c974: addiu $sp, $sp, 0x30
}