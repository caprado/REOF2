void func_001479b4() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001479b4: addiu $sp, $sp, -0x10
    v0 = -1;                                                    // 0x001479b8: addiu $v0, $zero, -1
    a2 = a2 + 0x22;                                             // 0x001479c0: addiu $a2, $a2, 0x22
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x001479c4: slt $v0, $v0, $v1
    if (v0 != 0) a2 = v1;                                       // 0x001479c8: movn $a2, $v1, $v0
    a0 = *(int32_t*)((a0) + 0x40);                              // 0x001479cc: lw $a0, 0x40($a0)
    a2 = a2 >> 4;                                               // 0x001479d0: sra $a2, $a2, 4
    func_00148688();  // 0x148588                                // 0x001479d4: jal 0x148588
    a2 = a2 << 4;                                               // 0x001479d8: sll $a2, $a2, 4
    v0 = 1;                                                     // 0x001479e0: addiu $v0, $zero, 1
    return;                                                     // 0x001479e4: jr $ra
    sp = sp + 0x10;                                             // 0x001479e8: addiu $sp, $sp, 0x10
}