void func_00175910() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00175910: addiu $sp, $sp, -0x20
    a0 = s0 + 4;                                                // 0x00175928: addiu $a0, $s0, 4
    func_00175978();  // 0x175958                                // 0x0017592c: jal 0x175958
    *(uint32_t*)(s0) = 0;                                       // 0x00175930: sw $zero, 0($s0)
    *(uint32_t*)((s0) + 0x20) = s1;                             // 0x00175934: sw $s1, 0x20($s0)
    v0 = 1;                                                     // 0x00175938: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x00175940: sw $v0, 0x24($s0)
    return;                                                     // 0x0017594c: jr $ra
    sp = sp + 0x20;                                             // 0x00175950: addiu $sp, $sp, 0x20
}