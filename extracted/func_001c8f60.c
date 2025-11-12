void func_001c8f60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c8f60: addiu $sp, $sp, -0x10
    a1 = *(uint16_t*)((v0) + 4);                                // 0x001c8f6c: lhu $a1, 4($v0)
    a2 = *(uint16_t*)((v0) + 6);                                // 0x001c8f70: lhu $a2, 6($v0)
    func_001c7ab0();  // 0x1c7a40                                // 0x001c8f74: jal 0x1c7a40
    a0 = *(int32_t*)(a0);                                       // 0x001c8f78: lw $a0, 0($a0)
    func_001c8c90();  // 0x1c8c80                                // 0x001c8f80: jal 0x1c8c80
    return;                                                     // 0x001c8f8c: jr $ra
    sp = sp + 0x10;                                             // 0x001c8f90: addiu $sp, $sp, 0x10
}