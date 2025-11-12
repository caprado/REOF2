void func_0017f518() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xb0;                                            // 0x0017f518: addiu $sp, $sp, -0xb0
    func_0017f0e8();  // 0x17f090                                // 0x0017f544: jal 0x17f090
    s0 = sp + 0x40;                                             // 0x0017f54c: addiu $s0, $sp, 0x40
    func_0017e8e8();  // 0x17e878                                // 0x0017f558: jal 0x17e878
    func_0017e9d8();  // 0x17e958                                // 0x0017f564: jal 0x17e958
    s0 = sp + 0x20;                                             // 0x0017f56c: addiu $s0, $sp, 0x20
    func_0017e9d8();  // 0x17e958                                // 0x0017f574: jal 0x17e958
    a0 = sp + 0x10;                                             // 0x0017f580: addiu $a0, $sp, 0x10
    func_0017e8e8();  // 0x17e878                                // 0x0017f584: jal 0x17e878
    func_0017ee98();  // 0x17ee18                                // 0x0017f594: jal 0x17ee18
    func_0017eb10();  // 0x17ea60                                // 0x0017f5a0: jal 0x17ea60
    return;                                                     // 0x0017f5c0: jr $ra
    sp = sp + 0xb0;                                             // 0x0017f5c4: addiu $sp, $sp, 0xb0
}