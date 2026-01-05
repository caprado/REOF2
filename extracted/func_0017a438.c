void func_0017a438() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017a438: addiu $sp, $sp, -0x10
    v0 = s0 + 8;                                                // 0x0017a44c: addiu $v0, $s0, 8
    a2 = *(int32_t*)((v0) + 8);                                 // 0x0017a450: lw $a2, 8($v0)
    a0 = *(int32_t*)(v0);                                       // 0x0017a454: lw $a0, 0($v0)
    func_0014f5c8();  // 14f5c8                                // 0x0017a458: jal 0x14f5c8
    a1 = *(int32_t*)((v0) + 4);                                 // 0x0017a45c: lw $a1, 4($v0)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0017a460: sw $zero, 4($s0)
    return;                                                     // 0x0017a46c: jr $ra
    sp = sp + 0x10;                                             // 0x0017a470: addiu $sp, $sp, 0x10
}