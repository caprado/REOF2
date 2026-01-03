void func_0013e258() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0013e258: addiu $sp, $sp, -0x10
    a0 = 0xc;                                                   // 0x0013e25c: addiu $a0, $zero, 0xc
    return func_00139228();  // Tail call                        // 0x0013e278: j 0x139120
    sp = sp + 0x10;                                             // 0x0013e27c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0013e280: addiu $sp, $sp, -0x10
    a0 = 0xd;                                                   // 0x0013e284: addiu $a0, $zero, 0xd
    return func_00139228();  // Tail call                        // 0x0013e2a0: j 0x139120
    sp = sp + 0x10;                                             // 0x0013e2a4: addiu $sp, $sp, 0x10
    sp = sp + -0x20;                                            // 0x0013e2a8: addiu $sp, $sp, -0x20
    v1 = 0x20 << 16;                                            // 0x0013e2ac: lui $v1, 0x20
    s0 = v1 + 0x7a68;                                           // 0x0013e2b4: addiu $s0, $v1, 0x7a68
    v0 = g_00207a68;  // Global at 0x00207a68                   // 0x0013e2b8: lw $v0, 0($s0)
    s1 = 1;                                                     // 0x0013e2c0: addiu $s1, $zero, 1
    if (v0 == s1) goto label_0x13e2e8;                          // 0x0013e2c4: beq $v0, $s1, 0x13e2e8
    a0 = 0xe;                                                   // 0x0013e2cc: addiu $a0, $zero, 0xe
    func_00139120();  // 139120                                // 0x0013e2dc: jal 0x139120
    g_00207a68 = s1;  // Global at 0x00207a68                   // 0x0013e2e4: sw $s1, 0($s0)
label_0x13e2e8:
    return;                                                     // 0x0013e2f4: jr $ra
    sp = sp + 0x20;                                             // 0x0013e2f8: addiu $sp, $sp, 0x20
}