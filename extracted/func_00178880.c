void func_00178880() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00178880: addiu $sp, $sp, -0x30
    s0 = a1 + 4;                                                // 0x00178888: addiu $s0, $a1, 4
    *(uint32_t*)(a1) = 0;                                       // 0x001788a8: sw $zero, 0($a1)
    /* nop */                                                   // 0x001788ac: nop 
label_0x1788b0:
    func_001788f8();  // 1788f8                                // 0x001788b0: jal 0x1788f8
    s1 = s1 + 1;                                                // 0x001788c0: addiu $s1, $s1, 1
    s0 = s0 + 0x10;                                             // 0x001788c8: addiu $s0, $s0, 0x10
    func_00166bd8();  // 166bd8                                // 0x001788cc: jal 0x166bd8
    v0 = (s1 < 3) ? 1 : 0;                                      // 0x001788d4: slti $v0, $s1, 3
    if (v0 != 0) goto label_0x1788b0;                           // 0x001788d8: bnez $v0, 0x1788b0
    return;                                                     // 0x001788f0: jr $ra
    sp = sp + 0x30;                                             // 0x001788f4: addiu $sp, $sp, 0x30
}