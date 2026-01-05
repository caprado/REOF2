void func_00111278() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00111278: addiu $sp, $sp, -0x20
    func_00111f40();  // 111f40                                // 0x00111294: jal 0x111f40
    /* nop */                                                   // 0x00111298: nop 
    if (v0 >= 0) return;  // Branch to 0x1112e0                 // 0x001112a4: bgezl $v0, 0x1112e0
    func_001119f0();  // 1119f0                                // 0x001112b0: jal 0x1119f0
    /* nop */                                                   // 0x001112b4: nop 
    func_00111160();  // 111160                                // 0x001112bc: jal 0x111160
    /* nop */                                                   // 0x001112c0: nop 
    return;                                                     // 0x001112d4: jr $ra
    sp = sp + 0x20;                                             // 0x001112d8: addiu $sp, $sp, 0x20
}