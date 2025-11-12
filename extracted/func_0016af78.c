void func_0016af78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0016af78: addiu $sp, $sp, -0x20
    func_0016b070();  // 0x16b000                                // 0x0016af90: jal 0x16b000
    s2 = 1;                                                     // 0x0016af94: addiu $s2, $zero, 1
    if (v0 == s2) goto label_0x16afe8;                          // 0x0016af98: beq $v0, $s2, 0x16afe8
    s0 = *(int32_t*)((s1) + 0x1af4);                            // 0x0016afa0: lw $s0, 0x1af4($s1)
    func_001679a0();  // 0x167980                                // 0x0016afa4: jal 0x167980
    if (v0 != s2) goto label_0x16afe8;                          // 0x0016afb0: bne $v0, $s2, 0x16afe8
    func_0016b130();  // 0x16b0d0                                // 0x0016afb8: jal 0x16b0d0
    /* nop */                                                   // 0x0016afbc: nop 
    if (v0 == 0) goto label_0x16afe8;                           // 0x0016afc0: beqz $v0, 0x16afe8
    a1 = 1;                                                     // 0x0016afd0: addiu $a1, $zero, 1
    return func_0016b0d0();  // Tail call                        // 0x0016afdc: j 0x16b070
    sp = sp + 0x20;                                             // 0x0016afe0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0016afe4: nop 
label_0x16afe8:
    return;                                                     // 0x0016aff8: jr $ra
    sp = sp + 0x20;                                             // 0x0016affc: addiu $sp, $sp, 0x20
}