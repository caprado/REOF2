void func_00171858() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00171858: addiu $sp, $sp, -0x20
    s0 = *(int32_t*)((a0) + 0x1b30);                            // 0x0017186c: lw $s0, 0x1b30($a0)
    a0 = s0 + 0xa48;                                            // 0x00171870: addiu $a0, $s0, 0xa48
    func_00171190();  // 171190                                // 0x00171874: jal 0x171190
    s0 = s0 + 0x9d8;                                            // 0x00171878: addiu $s0, $s0, 0x9d8
    v0 = 1;                                                     // 0x0017187c: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x20) = s1;                             // 0x00171880: sw $s1, 0x20($s0)
    *(uint32_t*)((s0) + 0x1c) = v0;                             // 0x00171884: sw $v0, 0x1c($s0)
    return;                                                     // 0x00171894: jr $ra
    sp = sp + 0x20;                                             // 0x00171898: addiu $sp, $sp, 0x20
}