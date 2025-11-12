void func_001350b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001350b8: addiu $sp, $sp, -0x10
    v0 = 0x20 << 16;                                            // 0x001350bc: lui $v0, 0x20
    v0 = v0 + 0x2178;                                           // 0x001350c4: addiu $v0, $v0, 0x2178
    v1 = g_00202178;  // Global at 0x00202178                   // 0x001350cc: lw $v1, 0($v0)
    if (a0 != 0) goto label_0x1350e8;                           // 0x001350d0: bnez $a0, 0x1350e8
    a0 = 0x22 << 16;                                            // 0x001350d8: lui $a0, 0x22
    a0 = &str_00224030;  // "cvFsAddDev #2:illegal I/F func name" // 0x001350dc: addiu $a0, $a0, 0x4030
    return func_00134fb0();  // Tail call                        // 0x001350e0: j 0x134ec0
    sp = sp + 0x10;                                             // 0x001350e4: addiu $sp, $sp, 0x10
label_0x1350e8:
    if (a2 != 0) goto label_0x135100;                           // 0x001350e8: bnez $a2, 0x135100
    /* nop */                                                   // 0x001350ec: nop 
    a0 = 0x22 << 16;                                            // 0x001350f0: lui $a0, 0x22
    a0 = &str_00224058;  // "cvFsAddDev #3:failed added a device" // 0x001350f4: addiu $a0, $a0, 0x4058
    return func_00134fb0();  // Tail call                        // 0x001350f8: j 0x134ec0
    sp = sp + 0x10;                                             // 0x001350fc: addiu $sp, $sp, 0x10
label_0x135100:
    func_00135220();  // 0x135148                                // 0x00135100: jal 0x135148
    /* nop */                                                   // 0x00135104: nop 
    /* bnezl $v0, 0x135128 */                                   // 0x00135108: bnezl $v0, 0x135128
    v0 = g_0020217c;  // Global at 0x0020217c                   // 0x0013510c: lw $v0, 4($v0)
    a0 = 0x22 << 16;                                            // 0x00135110: lui $a0, 0x22
    a0 = &str_00224080;  // "cvFsDelDev #1:illegal device name" // 0x00135118: addiu $a0, $a0, 0x4080
    return func_00134fb0();  // Tail call                        // 0x0013511c: j 0x134ec0
    sp = sp + 0x10;                                             // 0x00135120: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00135124: nop 
    if (v0 == 0) goto label_0x13513c;                           // 0x00135128: beqz $v0, 0x13513c
    a0 = 0x13 << 16;                                            // 0x00135130: lui $a0, 0x13
    /* call function at address in v0 */                        // 0x00135134: jalr $v0
    a0 = a0 + 0x4e90;                                           // 0x00135138: addiu $a0, $a0, 0x4e90
label_0x13513c:
    return;                                                     // 0x00135140: jr $ra
    sp = sp + 0x10;                                             // 0x00135144: addiu $sp, $sp, 0x10
}