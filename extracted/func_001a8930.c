void func_001a8930() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a8930: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((gp) + -0x63f4);                           // 0x001a8938: lw $v1, -0x63f4($gp)
    if (v1 == 0) goto label_0x1a894c;                           // 0x001a893c: beqz $v1, 0x1a894c
    func_0012bba0();  // 12bba0                                // 0x001a8944: jal 0x12bba0
    /* nop */                                                   // 0x001a8948: nop 
label_0x1a894c:
    return;                                                     // 0x001a8950: jr $ra
    sp = sp + 0x10;                                             // 0x001a8954: addiu $sp, $sp, 0x10
}