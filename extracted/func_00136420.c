void func_00136420() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00136420: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x136440;                           // 0x00136424: bnez $a0, 0x136440
    a0 = 0x22 << 16;                                            // 0x0013642c: lui $a0, 0x22
    func_00134fb0();  // 0x134ec0                                // 0x00136430: jal 0x134ec0
    a0 = &str_00224710;  // "cvFsGetMaxByteRate #2:vtbl error"  // 0x00136434: addiu $a0, $a0, 0x4710
    goto label_0x13646c;                                        // 0x00136438: b 0x13646c
label_0x136440:
    v0 = str_00224710;  // "cvFsGetMaxByteRate #2:vtbl error"   // 0x00136440: lw $v0, 0($a0)
    v0 = *(int32_t*)((v0) + 0x4c);                              // 0x00136444: lw $v0, 0x4c($v0)
    /* beqzl $v0, 0x136460 */                                   // 0x00136448: beqzl $v0, 0x136460
    a0 = 0x22 << 16;                                            // 0x0013644c: lui $a0, 0x22
    /* call function at address in v0 */                        // 0x00136450: jalr $v0
    a0 = g_00220004;  // Global at 0x00220004                   // 0x00136454: lw $a0, 4($a0)
    goto label_0x136470;                                        // 0x00136458: b 0x136470
    func_00134fb0();  // 0x134ec0                                // 0x00136460: jal 0x134ec0
    a0 = &str_00224738;  // "cvFsMakeDir #1:illegal directory name" // 0x00136464: addiu $a0, $a0, 0x4738
label_0x13646c:
label_0x136470:
    return;                                                     // 0x00136470: jr $ra
    sp = sp + 0x10;                                             // 0x00136474: addiu $sp, $sp, 0x10
}