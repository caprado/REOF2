void func_00102510() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x00102510: addiu $sp, $sp, -0x20
    a1 = 0x43a;                                                 // 0x00102514: addiu $a1, $zero, 0x43a
    func_00102328();  // 102328                                // 0x0010251c: jal 0x102328
    v0 = local_0;                                               // 0x00102524: lhu $v0, 0($sp)
    return;                                                     // 0x0010252c: jr $ra
    sp = sp + 0x20;                                             // 0x00102530: addiu $sp, $sp, 0x20
}