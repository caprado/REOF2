void func_00179240() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00179240: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((a0) + 4);                                 // 0x00179254: lw $v0, 4($a0)
    func_00178f58();  // 178f58                                // 0x00179258: jal 0x178f58
    s1 = v0 + 0x40;                                             // 0x0017925c: addiu $s1, $v0, 0x40
    if (v0 == 0) goto label_0x17929c;                           // 0x00179268: beqz $v0, 0x17929c
    a2 = 0xd;                                                   // 0x0017926c: addiu $a2, $zero, 0xd
    func_00107c70();  // 107c70                                // 0x00179270: jal 0x107c70
    /* nop */                                                   // 0x00179274: nop 
    v0 = 1;                                                     // 0x00179278: addiu $v0, $zero, 1
    /* lwl $a0, 0xb($s1) */                                     // 0x00179284: lwl $a0, 0xb($s1)
    /* lwr $a0, 8($s1) */                                       // 0x00179288: lwr $a0, 8($s1)
    /* swl $a0, 0xb($s0) */                                     // 0x00179294: swl $a0, 0xb($s0)
    /* swr $a0, 8($s0) */                                       // 0x00179298: swr $a0, 8($s0)
label_0x17929c:
    return;                                                     // 0x001792a8: jr $ra
    sp = sp + 0x20;                                             // 0x001792ac: addiu $sp, $sp, 0x20
}