void func_00179320() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00179320: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((a0) + 4);                                 // 0x00179334: lw $v0, 4($a0)
    func_00178fa0();  // 178fa0                                // 0x00179338: jal 0x178fa0
    s1 = v0 + 0x60;                                             // 0x0017933c: addiu $s1, $v0, 0x60
    if (v0 == 0) goto label_0x17939c;                           // 0x00179348: beqz $v0, 0x17939c
    a2 = 0x21;                                                  // 0x0017934c: addiu $a2, $zero, 0x21
    func_00107c70();  // 107c70                                // 0x00179350: jal 0x107c70
    /* nop */                                                   // 0x00179354: nop 
    v0 = 1;                                                     // 0x00179358: addiu $v0, $zero, 1
label_0x17939c:
    return;                                                     // 0x001793a8: jr $ra
    sp = sp + 0x20;                                             // 0x001793ac: addiu $sp, $sp, 0x20
}