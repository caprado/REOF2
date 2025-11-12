void func_00160048() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4, local_c;
    
    sp = sp + -0x30;                                            // 0x00160048: addiu $sp, $sp, -0x30
    func_00173b68();  // 0x173af8                                // 0x00160054: jal 0x173af8
    a0 = *(int32_t*)((a0) + 0x40);                              // 0x00160058: lw $a0, 0x40($a0)
    v1 = local_4;                                               // 0x0016005c: lw $v1, 4($sp)
    v0 = local_c;                                               // 0x00160060: lw $v0, 0xc($sp)
    v0 = v1 + v0;                                               // 0x00160068: addu $v0, $v1, $v0
    return;                                                     // 0x0016006c: jr $ra
    sp = sp + 0x30;                                             // 0x00160070: addiu $sp, $sp, 0x30
}