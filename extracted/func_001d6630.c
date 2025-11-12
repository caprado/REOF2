void func_001d6630() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x150;                                           // 0x001d6630: addiu $sp, $sp, -0x150
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d6638: dpa.w.ph $ac0, $sp, $s3
    s3 = a2 & 0xffff;                                           // 0x001d6640: andi $s3, $a2, 0xffff
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d6644: addu.qb $zero, $sp, $s1
    func_001d6560();  // 0x1d64f0                                // 0x001d6654: jal 0x1d64f0
    if (v0 != 0) goto label_0x1d66dc;                           // 0x001d665c: bnez $v0, 0x1d66dc
    /* nop */                                                   // 0x001d6660: nop 
    func_001d64f0();  // 0x1d64a0                                // 0x001d6664: jal 0x1d64a0
    /* nop */                                                   // 0x001d6668: nop 
    if (s2 == 0) goto label_0x1d66dc;                           // 0x001d6670: beqz $s2, 0x1d66dc
    a1 = 0x24 << 16;                                            // 0x001d6674: lui $a1, 0x24
    a2 = 0x24 << 16;                                            // 0x001d6678: lui $a2, 0x24
    a3 = s1 & 0xffff;                                           // 0x001d6680: andi $a3, $s1, 0xffff
    a0 = sp + 0x50;                                             // 0x001d6684: addiu $a0, $sp, 0x50
    a1 = &str_00247430;  // "..\\data\\rom\\motion\\enemy\\"    // 0x001d6688: addiu $a1, $a1, 0x7430
    func_0010a570();  // 0x10a4d8                                // 0x001d668c: jal 0x10a4d8
    a2 = &str_00247450;  // "data\\rom\\scene\\item_msg\\evelist.dat" // 0x001d6690: addiu $a2, $a2, 0x7450
    a1 = *(int32_t*)((gp) + -0x6230);                           // 0x001d6694: lw $a1, -0x6230($gp)
    a0 = sp + 0x53;                                             // 0x001d6698: addiu $a0, $sp, 0x53
    a2 = 1;                                                     // 0x001d669c: addiu $a2, $zero, 1
    func_001d33e0();  // 0x1d3390                                // 0x001d66a0: jal 0x1d3390
    if (a2 <= 0) goto label_0x1d66dc;                           // 0x001d66ac: blez $a2, 0x1d66dc
    /* nop */                                                   // 0x001d66b0: nop 
    a0 = *(int32_t*)((gp) + -0x6230);                           // 0x001d66b4: lw $a0, -0x6230($gp)
    a3 = 0xc8;                                                  // 0x001d66b8: addiu $a3, $zero, 0xc8
    a1 = *(int32_t*)((s2) + 4);                                 // 0x001d66bc: lw $a1, 4($s2)
    func_001d87d0();  // 0x1d87a0                                // 0x001d66c0: jal 0x1d87a0
    v1 = 1;                                                     // 0x001d66c8: addiu $v1, $zero, 1
    *(uint8_t*)(s2) = v1;                                       // 0x001d66cc: sb $v1, 0($s2)
    *(uint16_t*)((s2) + 2) = s0;                                // 0x001d66d0: sh $s0, 2($s2)
    *(uint16_t*)((s2) + 8) = s1;                                // 0x001d66d4: sh $s1, 8($s2)
    *(uint16_t*)((s2) + 0xc) = s3;                              // 0x001d66d8: sh $s3, 0xc($s2)
label_0x1d66dc:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d66e4: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d66e8: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d66ec: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d66f0: jr $ra
    sp = sp + 0x150;                                            // 0x001d66f4: addiu $sp, $sp, 0x150
}