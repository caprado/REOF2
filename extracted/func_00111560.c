void func_00111560() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x30;                                            // 0x00111560: addiu $sp, $sp, -0x30
    a0 = sp + 0x10;                                             // 0x00111564: addiu $a0, $sp, 0x10
    func_001114d0();  // 1114d0                                // 0x00111570: jal 0x1114d0
    *(float*)((sp) + 0x10) = FPU_F12;  // Store float           // 0x00111574: swc1 $f12, 0x10($sp)
    a0 = local_0;                                               // 0x0011157c: lw $a0, 0($sp)
    a1 = local_4;                                               // 0x00111580: lw $a1, 4($sp)
    func_001120e8();  // 1120e8                                // 0x00111588: jal 0x1120e8
    a2 = local_8;                                               // 0x0011158c: lw $a2, 8($sp)
    return;                                                     // 0x00111594: jr $ra
    sp = sp + 0x30;                                             // 0x00111598: addiu $sp, $sp, 0x30
}