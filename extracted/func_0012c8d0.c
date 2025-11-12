void func_0012c8d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0012c8d0: addiu $sp, $sp, -0x20
    *(uint32_t*)((s0) + 0x38) = s1;                             // 0x0012c8e8: sw $s1, 0x38($s0)
    func_00122d48();  // 0x122ce0                                // 0x0012c8ec: jal 0x122ce0
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0012c8f0: lw $a0, 4($s0)
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0012c8f4: lw $a0, 4($s0)
    return func_00122b30();  // Tail call                       // 0x0012c908: j 0x122b30
    sp = sp + 0x20;                                             // 0x0012c90c: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x0012c910: addiu $sp, $sp, -0x10
    func_00122da0();  // 0x122d70                                // 0x0012c920: jal 0x122d70
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0012c924: lw $a0, 4($s0)
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0012c928: lw $a0, 4($s0)
    return func_00122b80();  // Tail call                        // 0x0012c934: j 0x122b50
    sp = sp + 0x10;                                             // 0x0012c938: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012c93c: nop 
    sp = sp + -0x10;                                            // 0x0012c940: addiu $sp, $sp, -0x10
    func_0012c698();  // 0x12c660                                // 0x0012c94c: jal 0x12c660
    v0 = 1;                                                     // 0x0012c954: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x0012c95c: sb $v0, 1($s0)
    return;                                                     // 0x0012c964: jr $ra
    sp = sp + 0x10;                                             // 0x0012c968: addiu $sp, $sp, 0x10
}