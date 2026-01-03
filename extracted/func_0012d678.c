void func_0012d678() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012d678: addiu $sp, $sp, -0x10
    func_00124c08();  // 124c08                                // 0x0012d688: jal 0x124c08
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0012d68c: lw $a0, 4($s0)
    if (v0 <= 0) goto label_0x12d6c0;                           // 0x0012d690: blezl $v0, 0x12d6c0
    v0 = *(uint8_t*)((s0) + 1);                                 // 0x0012d698: lbu $v0, 1($s0)
    v0 = v0 + -2;                                               // 0x0012d69c: addiu $v0, $v0, -2
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x0012d6a0: sltiu $v0, $v0, 2
    /* beqzl $v0, 0x12d6c0 */                                   // 0x0012d6a4: beqzl $v0, 0x12d6c0
    a0 = *(int32_t*)((s0) + 4);                                 // 0x0012d6ac: lw $a0, 4($s0)
    return func_00124c28();  // Tail call                       // 0x0012d6b8: j 0x124c28
    sp = sp + 0x10;                                             // 0x0012d6bc: addiu $sp, $sp, 0x10
label_0x12d6c0:
    return;                                                     // 0x0012d6c8: jr $ra
    sp = sp + 0x10;                                             // 0x0012d6cc: addiu $sp, $sp, 0x10
}