void func_0012c880() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0012c880: addiu $sp, $sp, -0x20
    *(uint32_t*)((s0) + 8) = s1;                                // 0x0012c898: sw $s1, 8($s0)
    func_00122ce0();  // 0x122cb0                                // 0x0012c89c: jal 0x122cb0
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0012c8a0: lw $a0, 4($s0)
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0012c8a4: lw $a0, 4($s0)
    return func_00122b50();  // Tail call                        // 0x0012c8b8: j 0x122b00
    sp = sp + 0x20;                                             // 0x0012c8bc: addiu $sp, $sp, 0x20
    a1 = a1 << 2;                                               // 0x0012c8c0: sll $a1, $a1, 2
    a0 = a0 + a1;                                               // 0x0012c8c4: addu $a0, $a0, $a1
    return;                                                     // 0x0012c8c8: jr $ra
    *(uint32_t*)((a0) + 0xc) = a2;                              // 0x0012c8cc: sw $a2, 0xc($a0)
}