void func_0012c258() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012c258: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((a0) + 0xc);                               // 0x0012c260: lw $v0, 0xc($a0)
    a0 = a1 << 2;                                               // 0x0012c264: sll $a0, $a1, 2
    v0 = v0 + a0;                                               // 0x0012c26c: addu $v0, $v0, $a0
    v1 = *(int32_t*)((v0) + 8);                                 // 0x0012c270: lw $v1, 8($v0)
    func_00140a90();  // 140a90                                // 0x0012c274: jal 0x140a90
    a0 = *(int32_t*)((v1) + 4);                                 // 0x0012c278: lw $a0, 4($v1)
    v0 = (unsigned)v0 >> 1;                                     // 0x0012c280: srl $v0, $v0, 1
    return;                                                     // 0x0012c284: jr $ra
    sp = sp + 0x10;                                             // 0x0012c288: addiu $sp, $sp, 0x10
}