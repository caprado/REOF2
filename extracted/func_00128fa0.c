void func_00128fa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00128fa0: addiu $sp, $sp, -0x10
    a1 = *(int32_t*)((s0) + 8);                                 // 0x00128fb0: lw $a1, 8($s0)
    /* beqzl $a1, 0x129004 */                                   // 0x00128fb4: beqzl $a1, 0x129004
    v0 = *(int8_t*)((s0) + 2);                                  // 0x00128fbc: lb $v0, 2($s0)
    /* bnezl $v0, 0x129004 */                                   // 0x00128fc0: bnezl $v0, 0x129004
    v0 = 0x1f << 16;                                            // 0x00128fc8: lui $v0, 0x1f
    a0 = 1;                                                     // 0x00128fcc: addiu $a0, $zero, 1
    v1 = g_001f3700;  // Global at 0x001f3700                   // 0x00128fd0: lw $v1, 0x3700($v0)
    if (v1 != a0) goto label_0x128ff0;                          // 0x00128fd4: bnel $v1, $a0, 0x128ff0
    v1 = *(int32_t*)(a1);                                       // 0x00128fd8: lw $v1, 0($a1)
    a1 = *(int32_t*)((s0) + 0x28);                              // 0x00128fdc: lw $a1, 0x28($s0)
    func_00128008();  // 0x127fe8                                // 0x00128fe0: jal 0x127fe8
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x00128fe4: lw $a0, 0x24($s0)
    a1 = *(int32_t*)((s0) + 8);                                 // 0x00128fe8: lw $a1, 8($s0)
    v1 = *(int32_t*)(a1);                                       // 0x00128fec: lw $v1, 0($a1)
label_0x128ff0:
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x00128ff0: sw $zero, 8($s0)
    v0 = *(int32_t*)((v1) + 0xc);                               // 0x00128ff4: lw $v0, 0xc($v1)
    /* call function at address in v0 */                        // 0x00128ff8: jalr $v0
    return;                                                     // 0x00129008: jr $ra
    sp = sp + 0x10;                                             // 0x0012900c: addiu $sp, $sp, 0x10
}