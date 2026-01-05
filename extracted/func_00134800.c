void func_00134800() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00134800: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((s0) + 8);                                 // 0x00134810: lw $v0, 8($s0)
    if (v0 == 0) goto label_0x134840;                           // 0x00134814: beqz $v0, 0x134840
    func_00130278();  // 130278                                // 0x0013481c: jal 0x130278
    /* nop */                                                   // 0x00134820: nop 
    v1 = 4;                                                     // 0x00134824: addiu $v1, $zero, 4
    if (v0 != v1) goto label_0x134844;                          // 0x00134828: bnel $v0, $v1, 0x134844
    a0 = *(int32_t*)((s0) + 0x94);                              // 0x0013482c: lw $a0, 0x94($s0)
    v0 = -1;                                                    // 0x00134830: addiu $v0, $zero, -1
    v1 = 6;                                                     // 0x00134834: addiu $v1, $zero, 6
    *(uint16_t*)((s0) + 0x60) = v0;                             // 0x00134838: sh $v0, 0x60($s0)
    *(uint8_t*)((s0) + 1) = v1;                                 // 0x0013483c: sb $v1, 1($s0)
label_0x134840:
    a0 = *(int32_t*)((s0) + 0x94);                              // 0x00134840: lw $a0, 0x94($s0)
label_0x134844:
    /* beqzl $a0, 0x134874 */                                   // 0x00134844: beqzl $a0, 0x134874
    func_0013cd60();  // 13cd60                                // 0x0013484c: jal 0x13cd60
    /* nop */                                                   // 0x00134850: nop 
    v1 = 3;                                                     // 0x00134854: addiu $v1, $zero, 3
    if (v0 != v1) goto label_0x134874;                          // 0x00134858: bnel $v0, $v1, 0x134874
    v0 = 6;                                                     // 0x00134860: addiu $v0, $zero, 6
    v1 = -1;                                                    // 0x00134864: addiu $v1, $zero, -1
    *(uint8_t*)((s0) + 1) = v0;                                 // 0x00134868: sb $v0, 1($s0)
    *(uint16_t*)((s0) + 0x60) = v1;                             // 0x0013486c: sh $v1, 0x60($s0)
label_0x134874:
    return;                                                     // 0x00134878: jr $ra
    sp = sp + 0x10;                                             // 0x0013487c: addiu $sp, $sp, 0x10
}