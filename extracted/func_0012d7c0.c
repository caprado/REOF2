void func_0012d7c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x20 << 16;                                            // 0x0012d7c0: lui $v0, 0x20
    sp = sp + -0x30;                                            // 0x0012d7c4: addiu $sp, $sp, -0x30
    v1 = g_001fed48;  // Global at 0x001fed48                   // 0x0012d7c8: lw $v1, -0x12b8($v0)
    if (v1 != 0) goto label_0x12d804;                           // 0x0012d7f4: bnez $v1, 0x12d804
    func_0012d7a0();  // 0x12d780                                // 0x0012d7fc: jal 0x12d780
    /* nop */                                                   // 0x0012d800: nop 
label_0x12d804:
    *(uint16_t*)(s2) = 0;                                       // 0x0012d804: sh $zero, 0($s2)
    *(uint16_t*)(s3) = 0;                                       // 0x0012d808: sh $zero, 0($s3)
    if (s1 != 0) goto label_0x12d81c;                           // 0x0012d80c: bnez $s1, 0x12d81c
    *(uint16_t*)(s4) = 0;                                       // 0x0012d810: sh $zero, 0($s4)
    if (s0 <= 0) goto label_0x12d954;                           // 0x0012d814: blez $s0, 0x12d954
label_0x12d81c:
    t3 = 0x22 << 16;                                            // 0x0012d81c: lui $t3, 0x22
    v0 = t3 + 0x1be0;                                           // 0x0012d824: addiu $v0, $t3, 0x1be0
    if (s0 <= 0) goto label_0x12d88c;                           // 0x0012d828: blez $s0, 0x12d88c
    t2 = g_00221de0;  // Global at 0x00221de0                   // 0x0012d82c: lh $t2, 0x200($v0)
    /* nop */                                                   // 0x0012d834: nop 
label_0x12d838:
    v1 = s1 + a3;                                               // 0x0012d838: addu $v1, $s1, $a3
    a3 = a3 + 1;                                                // 0x0012d83c: addiu $a3, $a3, 1
    v0 = *(int8_t*)(v1);                                        // 0x0012d840: lb $v0, 0($v1)
    a2 = (a3 < s0) ? 1 : 0;                                     // 0x0012d844: slt $a2, $a3, $s0
    v0 = v0 << 1;                                               // 0x0012d848: sll $v0, $v0, 1
    v0 = v0 + t0;                                               // 0x0012d84c: addu $v0, $v0, $t0
    v1 = g_00221ce0;  // Global at 0x00221ce0                   // 0x0012d850: lh $v1, 0x100($v0)
    /* multiply: t2 * v1 -> hi:lo */                            // 0x0012d854: mult $ac3, $t2, $v1
    a1 = v1 + 0x3ff;                                            // 0x0012d858: addiu $a1, $v1, 0x3ff
    a0 = (v1 < 0) ? 1 : 0;                                      // 0x0012d85c: slti $a0, $v1, 0
    if (a0 != 0) v0 = a1;                                       // 0x0012d864: movn $v0, $a1, $a0
    v0 = v0 >> 0xa;                                             // 0x0012d868: sra $v0, $v0, 0xa
    v0 = v0 << 0xa;                                             // 0x0012d86c: sll $v0, $v0, 0xa
    v1 = v1 - v0;                                               // 0x0012d870: subu $v1, $v1, $v0
    v1 = v1 << 1;                                               // 0x0012d874: sll $v1, $v1, 1
    v1 = v1 + t0;                                               // 0x0012d878: addu $v1, $v1, $t0
    if (a2 != 0) goto label_0x12d838;                           // 0x0012d87c: bnez $a2, 0x12d838
    t2 = *(int16_t*)(v1);                                       // 0x0012d880: lh $t2, 0($v1)
    v0 = t3 + 0x1be0;                                           // 0x0012d884: addiu $v0, $t3, 0x1be0
label_0x12d88c:
    if (s0 <= 0) goto label_0x12d8e4;                           // 0x0012d88c: blez $s0, 0x12d8e4
    t0 = g_00221fe0;  // Global at 0x00221fe0                   // 0x0012d890: lh $t0, 0x400($v0)
label_0x12d898:
    v1 = s1 + a3;                                               // 0x0012d898: addu $v1, $s1, $a3
    a3 = a3 + 1;                                                // 0x0012d89c: addiu $a3, $a3, 1
    v0 = *(int8_t*)(v1);                                        // 0x0012d8a0: lb $v0, 0($v1)
    a2 = (a3 < s0) ? 1 : 0;                                     // 0x0012d8a4: slt $a2, $a3, $s0
    v0 = v0 << 1;                                               // 0x0012d8a8: sll $v0, $v0, 1
    v0 = v0 + t1;                                               // 0x0012d8ac: addu $v0, $v0, $t1
    v1 = g_00221ce0;  // Global at 0x00221ce0                   // 0x0012d8b0: lh $v1, 0x100($v0)
    /* multiply: t0 * v1 -> hi:lo */                            // 0x0012d8b4: mult $ac3, $t0, $v1
    a1 = v1 + 0x3ff;                                            // 0x0012d8b8: addiu $a1, $v1, 0x3ff
    a0 = (v1 < 0) ? 1 : 0;                                      // 0x0012d8bc: slti $a0, $v1, 0
    if (a0 != 0) v0 = a1;                                       // 0x0012d8c4: movn $v0, $a1, $a0
    v0 = v0 >> 0xa;                                             // 0x0012d8c8: sra $v0, $v0, 0xa
    v0 = v0 << 0xa;                                             // 0x0012d8cc: sll $v0, $v0, 0xa
    v1 = v1 - v0;                                               // 0x0012d8d0: subu $v1, $v1, $v0
    v1 = v1 << 1;                                               // 0x0012d8d4: sll $v1, $v1, 1
    v1 = v1 + t1;                                               // 0x0012d8d8: addu $v1, $v1, $t1
    if (a2 != 0) goto label_0x12d898;                           // 0x0012d8dc: bnez $a2, 0x12d898
    t0 = *(int16_t*)(v1);                                       // 0x0012d8e0: lh $t0, 0($v1)
label_0x12d8e4:
    v0 = t3 + 0x1be0;                                           // 0x0012d8e4: addiu $v0, $t3, 0x1be0
    if (s0 <= 0) goto label_0x12d944;                           // 0x0012d8ec: blez $s0, 0x12d944
    a0 = g_002221e0;  // Global at 0x002221e0                   // 0x0012d8f0: lh $a0, 0x600($v0)
label_0x12d8f8:
    v1 = s1 + a3;                                               // 0x0012d8f8: addu $v1, $s1, $a3
    a3 = a3 + 1;                                                // 0x0012d8fc: addiu $a3, $a3, 1
    v0 = *(int8_t*)(v1);                                        // 0x0012d900: lb $v0, 0($v1)
    a2 = (a3 < s0) ? 1 : 0;                                     // 0x0012d904: slt $a2, $a3, $s0
    v0 = v0 << 1;                                               // 0x0012d908: sll $v0, $v0, 1
    v0 = v0 + t1;                                               // 0x0012d90c: addu $v0, $v0, $t1
    v1 = g_00221ce0;  // Global at 0x00221ce0                   // 0x0012d910: lh $v1, 0x100($v0)
    /* multiply: a0 * v1 -> hi:lo */                            // 0x0012d914: mult $ac3, $a0, $v1
    a0 = (v1 < 0) ? 1 : 0;                                      // 0x0012d918: slti $a0, $v1, 0
    a1 = v1 + 0x3ff;                                            // 0x0012d91c: addiu $a1, $v1, 0x3ff
    if (a0 != 0) v0 = a1;                                       // 0x0012d924: movn $v0, $a1, $a0
    v0 = v0 >> 0xa;                                             // 0x0012d928: sra $v0, $v0, 0xa
    v0 = v0 << 0xa;                                             // 0x0012d92c: sll $v0, $v0, 0xa
    v1 = v1 - v0;                                               // 0x0012d930: subu $v1, $v1, $v0
    v1 = v1 << 1;                                               // 0x0012d934: sll $v1, $v1, 1
    v1 = v1 + t1;                                               // 0x0012d938: addu $v1, $v1, $t1
    if (a2 != 0) goto label_0x12d8f8;                           // 0x0012d93c: bnez $a2, 0x12d8f8
    a0 = *(int16_t*)(v1);                                       // 0x0012d940: lh $a0, 0($v1)
label_0x12d944:
    *(uint16_t*)(s2) = t2;                                      // 0x0012d944: sh $t2, 0($s2)
    *(uint16_t*)(s3) = t0;                                      // 0x0012d94c: sh $t0, 0($s3)
    *(uint16_t*)(s4) = a0;                                      // 0x0012d950: sh $a0, 0($s4)
label_0x12d954:
    return;                                                     // 0x0012d96c: jr $ra
    sp = sp + 0x30;                                             // 0x0012d970: addiu $sp, $sp, 0x30
}