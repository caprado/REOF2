void func_0015f628() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015f628: addiu $sp, $sp, -0x20
    a0 = 9;                                                     // 0x0015f63c: addiu $a0, $zero, 9
    func_00103080();  // 103080                                // 0x0015f648: jal 0x103080
    a0 = s0 + 0xf;                                              // 0x0015f650: addiu $a0, $s0, 0xf
    v1 = (s0 < 0) ? 1 : 0;                                      // 0x0015f654: slti $v1, $s0, 0
    *(uint32_t*)((v0) + 0x80) = s1;                             // 0x0015f658: sw $s1, 0x80($v0)
    if (v1 != 0) s0 = a0;                                       // 0x0015f65c: movn $s0, $a0, $v1
    func_00103418();  // 103418                                // 0x0015f668: jal 0x103418
    a2 = s0 >> 4;                                               // 0x0015f66c: sra $a2, $s0, 4
    return;                                                     // 0x0015f684: jr $ra
    sp = sp + 0x20;                                             // 0x0015f688: addiu $sp, $sp, 0x20
}