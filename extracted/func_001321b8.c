void func_001321b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001321b8: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x1321d8;                           // 0x001321bc: bnez $a0, 0x1321d8
    a0 = 0x22 << 16;                                            // 0x001321c4: lui $a0, 0x22
    func_00127d90();  // 127d90                                // 0x001321c8: jal 0x127d90
    a0 = &str_00223848;  // "E02080820 ADXT_GetNumChan: parameter error" // 0x001321cc: addiu $a0, $a0, 0x3848
    goto label_0x1321f8;                                        // 0x001321d0: b 0x1321f8
    v0 = -1;                                                    // 0x001321d4: addiu $v0, $zero, -1
label_0x1321d8:
    v0 = g_00223849;  // Global at 0x00223849                   // 0x001321d8: lb $v0, 1($a0)
    v0 = (v0 < 2) ? 1 : 0;                                      // 0x001321dc: slti $v0, $v0, 2
    /* bnezl $v0, 0x1321f8 */                                   // 0x001321e0: bnezl $v0, 0x1321f8
    a0 = g_0022384c;  // Global at 0x0022384c                   // 0x001321e8: lw $a0, 4($a0)
    return func_0012d468();  // Tail call                        // 0x001321f0: j 0x12d450
    sp = sp + 0x10;                                             // 0x001321f4: addiu $sp, $sp, 0x10
label_0x1321f8:
    return;                                                     // 0x001321fc: jr $ra
    sp = sp + 0x10;                                             // 0x00132200: addiu $sp, $sp, 0x10
}