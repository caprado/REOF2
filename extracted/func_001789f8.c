void func_001789f8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001789f8: addiu $sp, $sp, -0x20
    a1 = 5;                                                     // 0x001789fc: addiu $a1, $zero, 5
    func_001752f8();  // 0x1752e8                                // 0x00178a0c: jal 0x1752e8
    if (v0 == 0) goto label_0x178a3c;                           // 0x00178a14: beqz $v0, 0x178a3c
    func_00178ad0();  // 0x178a50                                // 0x00178a1c: jal 0x178a50
    /* nop */                                                   // 0x00178a20: nop 
    func_00178bd8();  // 0x178ba0                                // 0x00178a24: jal 0x178ba0
    func_00178b98();  // 0x178b18                                // 0x00178a30: jal 0x178b18
label_0x178a3c:
    return;                                                     // 0x00178a48: jr $ra
    sp = sp + 0x20;                                             // 0x00178a4c: addiu $sp, $sp, 0x20
}