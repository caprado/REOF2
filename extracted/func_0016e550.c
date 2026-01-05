void func_0016e550() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0016e550: addiu $sp, $sp, -0x10
    a1 = a0 + 0x2ab4;                                           // 0x0016e554: addiu $a1, $a0, 0x2ab4
    v1 = a0 + 0xda4;                                            // 0x0016e560: addiu $v1, $a0, 0xda4
    a2 = *(int32_t*)((a1) + 4);                                 // 0x0016e564: lw $a2, 4($a1)
    if (a2 < 0) goto label_0x16e594;                            // 0x0016e568: bltz $a2, 0x16e594
    t0 = a0 + 0xd54;                                            // 0x0016e56c: addiu $t0, $a0, 0xd54
    v1 = *(int32_t*)(v1);                                       // 0x0016e570: lw $v1, 0($v1)
    /* bnezl $v1, 0x16e598 */                                   // 0x0016e574: bnezl $v1, 0x16e598
    a2 = *(int32_t*)((t0) + 0x20);                              // 0x0016e580: lw $a2, 0x20($t0)
    a1 = *(int32_t*)((a1) + 8);                                 // 0x0016e584: lw $a1, 8($a1)
    func_0014fea8();  // 14fea8                                // 0x0016e588: jal 0x14fea8
    a3 = *(int32_t*)((t0) + 0x24);                              // 0x0016e58c: lw $a3, 0x24($t0)
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x0016e590: sltiu $v0, $v0, 1
label_0x16e594:
    return;                                                     // 0x0016e598: jr $ra
    sp = sp + 0x10;                                             // 0x0016e59c: addiu $sp, $sp, 0x10
}