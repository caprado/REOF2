void func_001594e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001594e0: addiu $sp, $sp, -0x20
    v1 = *(int32_t*)((s1) + 0x354);                             // 0x001594f8: lw $v1, 0x354($s1)
    if (v1 != 0) goto label_0x159570;                           // 0x001594fc: bnez $v1, 0x159570
    a0 = *(int32_t*)(s0);                                       // 0x00159504: lw $a0, 0($s0)
    a2 = 0x40;                                                  // 0x00159508: addiu $a2, $zero, 0x40
    func_00158410();  // 158410                                // 0x0015950c: jal 0x158410
    a1 = *(int32_t*)((s0) + 4);                                 // 0x00159510: lw $a1, 4($s0)
    if (v1 == 0) goto label_0x15956c;                           // 0x00159518: beqz $v1, 0x15956c
    v1 = v1 + 4;                                                // 0x0015951c: addiu $v1, $v1, 4
    a1 = *(int32_t*)(s0);                                       // 0x00159520: lw $a1, 0($s0)
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00159524: lw $v0, 4($s0)
    a1 = v1 - a1;                                               // 0x0015952c: subu $a1, $v1, $a1
    a2 = -1;                                                    // 0x00159530: addiu $a2, $zero, -1
    func_00158410();  // 158410                                // 0x00159534: jal 0x158410
    a1 = v0 - a1;                                               // 0x00159538: subu $a1, $v0, $a1
    /* beqzl $v1, 0x159570 */                                   // 0x00159540: beqzl $v1, 0x159570
    v0 = *(int32_t*)((s1) + 0x354);                             // 0x00159544: lw $v0, 0x354($s1)
    func_00158278();  // 158278                                // 0x00159548: jal 0x158278
    v0 = v1 & 0x10;                                             // 0x00159554: andi $v0, $v1, 0x10
    if (v0 != 0) goto label_0x159568;                           // 0x00159558: bnez $v0, 0x159568
    v0 = 2;                                                     // 0x0015955c: addiu $v0, $zero, 2
    if (v1 == 0) goto label_0x15956c;                           // 0x00159560: beqz $v1, 0x15956c
    v0 = 1;                                                     // 0x00159564: addiu $v0, $zero, 1
label_0x159568:
    *(uint32_t*)((s1) + 0x354) = v0;                            // 0x00159568: sw $v0, 0x354($s1)
label_0x15956c:
    v0 = *(int32_t*)((s1) + 0x354);                             // 0x0015956c: lw $v0, 0x354($s1)
label_0x159570:
    return;                                                     // 0x0015957c: jr $ra
    sp = sp + 0x20;                                             // 0x00159580: addiu $sp, $sp, 0x20
}