void func_00174808() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00174808: addiu $sp, $sp, -0x20
    func_00169b10();  // 0x169af0                                // 0x00174820: jal 0x169af0
    *(uint32_t*)(s0) = 0;                                       // 0x00174824: sw $zero, 0($s0)
    a1 = 0xff00 << 16;                                          // 0x00174828: lui $a1, 0xff00
    if (v0 == 0) goto label_0x174850;                           // 0x0017482c: beqz $v0, 0x174850
    a1 = a1 | 0x155;                                            // 0x00174838: ori $a1, $a1, 0x155
    return func_00169940();  // Tail call                        // 0x00174844: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00174848: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0017484c: nop 
label_0x174850:
    a0 = *(int32_t*)((s1) + 0x2ab0);                            // 0x00174850: lw $a0, 0x2ab0($s1)
    func_001748e8();  // 0x174878                                // 0x00174854: jal 0x174878
    return;                                                     // 0x0017486c: jr $ra
    sp = sp + 0x20;                                             // 0x00174870: addiu $sp, $sp, 0x20
}