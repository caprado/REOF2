void func_001bd490() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x140;                                           // 0x001bd490: addiu $sp, $sp, -0x140
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001bd49c: addu.qb $zero, $sp, $s1
    a1 = *(int32_t*)((gp) + -0x7c58);                           // 0x001bd4a4: lw $a1, -0x7c58($gp)
    func_001bdd90();  // 1bdd90                                // 0x001bd4ac: jal 0x1bdd90
    a0 = sp + 0x40;                                             // 0x001bd4b0: addiu $a0, $sp, 0x40
    a0 = sp + 0x40;                                             // 0x001bd4b4: addiu $a0, $sp, 0x40
    a1 = 1;                                                     // 0x001bd4b8: addiu $a1, $zero, 1
    func_00118730();  // 118730                                // 0x001bd4bc: jal 0x118730
    if (v0 < 0) goto label_0x1bd5b4;                            // 0x001bd4c4: bltz $v0, 0x1bd5b4
    func_00118b38();  // 118b38                                // 0x001bd4d4: jal 0x118b38
    a2 = 2;                                                     // 0x001bd4d8: addiu $a2, $zero, 2
    func_00118b38();  // 118b38                                // 0x001bd4e8: jal 0x118b38
    a1 = *(int32_t*)((s0) + 0xc);                               // 0x001bd4f0: lw $a1, 0xc($s0)
    func_00118d70();  // 118d70                                // 0x001bd4f8: jal 0x118d70
    func_001189b8();  // 1189b8                                // 0x001bd500: jal 0x1189b8
    v1 = s1 + 0x3f;                                             // 0x001bd508: addiu $v1, $s1, 0x3f
    *(uint32_t*)((s0) + 0x30) = s1;                             // 0x001bd50c: sw $s1, 0x30($s0)
    if (v1 >= 0) goto label_0x1bd520;                           // 0x001bd510: bgez $v1, 0x1bd520
    v0 = v1 >> 6;                                               // 0x001bd514: sra $v0, $v1, 6
    v0 = v1 + 0x3f;                                             // 0x001bd518: addiu $v0, $v1, 0x3f
    v0 = v0 >> 6;                                               // 0x001bd51c: sra $v0, $v0, 6
label_0x1bd520:
    v1 = v0 << 6;                                               // 0x001bd520: sll $v1, $v0, 6
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x001bd524: lw $v0, 0xc($s0)
    v0 = v0 + v1;                                               // 0x001bd528: addu $v0, $v0, $v1
    *(uint32_t*)((s0) + 0x3c) = v0;                             // 0x001bd52c: sw $v0, 0x3c($s0)
    a1 = *(int32_t*)((gp) + -0x7c54);                           // 0x001bd530: lw $a1, -0x7c54($gp)
    func_001bdd90();  // 1bdd90                                // 0x001bd534: jal 0x1bdd90
    a0 = sp + 0x40;                                             // 0x001bd538: addiu $a0, $sp, 0x40
    a0 = sp + 0x40;                                             // 0x001bd53c: addiu $a0, $sp, 0x40
    a1 = 1;                                                     // 0x001bd540: addiu $a1, $zero, 1
    func_00118730();  // 118730                                // 0x001bd544: jal 0x118730
    if (v0 >= 0) goto label_0x1bd568;                           // 0x001bd54c: bgez $v0, 0x1bd568
    func_001bd340();  // 1bd340                                // 0x001bd558: jal 0x1bd340
    goto label_0x1bd5b8;                                        // 0x001bd560: b 0x1bd5b8
label_0x1bd568:
    func_00118b38();  // 118b38                                // 0x001bd570: jal 0x118b38
    a2 = 2;                                                     // 0x001bd574: addiu $a2, $zero, 2
    func_00118b38();  // 118b38                                // 0x001bd584: jal 0x118b38
    a1 = *(int32_t*)((s0) + 0x3c);                              // 0x001bd58c: lw $a1, 0x3c($s0)
    func_00118d70();  // 118d70                                // 0x001bd594: jal 0x118d70
    func_001189b8();  // 1189b8                                // 0x001bd59c: jal 0x1189b8
    *(uint32_t*)((s0) + 0x40) = s2;                             // 0x001bd5a4: sw $s2, 0x40($s0)
    v1 = *(int32_t*)(s0);                                       // 0x001bd5a8: lw $v1, 0($s0)
    v1 = v1 + 1;                                                // 0x001bd5ac: addiu $v1, $v1, 1
    *(uint32_t*)(s0) = v1;                                      // 0x001bd5b0: sw $v1, 0($s0)
label_0x1bd5b4:
label_0x1bd5b8:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001bd5b8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001bd5bc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bd5c0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bd5c4: jr $ra
    sp = sp + 0x140;                                            // 0x001bd5c8: addiu $sp, $sp, 0x140
}