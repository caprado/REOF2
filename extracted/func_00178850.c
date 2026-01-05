void func_00178850() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00178850: addiu $sp, $sp, -0x10
    a1 = v0 + 0x2a78;                                           // 0x0017885c: addiu $a1, $v0, 0x2a78
    v0 = v0 + 0x1cc0;                                           // 0x00178860: addiu $v0, $v0, 0x1cc0
    *(uint32_t*)((v0) + 8) = a1;                                // 0x00178864: sw $a1, 8($v0)
    func_00178880();  // 178880                                // 0x00178868: jal 0x178880
    a2 = *(int32_t*)((v0) + 0x10);                              // 0x0017886c: lw $a2, 0x10($v0)
    return;                                                     // 0x00178878: jr $ra
    sp = sp + 0x10;                                             // 0x0017887c: addiu $sp, $sp, 0x10
}