void func_0011d484() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x0011d484: addiu $sp, $sp, -0x20
    a1 = *(int32_t*)((v0) + 0xa58);                             // 0x0011d488: lw $a1, 0xa58($v0)
    v1 = a0 << 2;                                               // 0x0011d48c: sll $v1, $a0, 2
    a2 = 4;                                                     // 0x0011d498: addiu $a2, $zero, 4
    func_0011d3e8();  // 11d3e8                                // 0x0011d49c: jal 0x11d3e8
    a1 = a1 + v1;                                               // 0x0011d4a0: addu $a1, $a1, $v1
    v0 = local_0;                                               // 0x0011d4a4: lw $v0, 0($sp)
    return;                                                     // 0x0011d4ac: jr $ra
    sp = sp + 0x20;                                             // 0x0011d4b0: addiu $sp, $sp, 0x20
}