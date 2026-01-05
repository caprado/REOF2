/** @category: graphics/dma @status: complete @author: caprado */
void func_0019f420() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xa0;                                            // 0x0019f420: addiu $sp, $sp, -0xa0
    a0 = 4 << 16;                                               // 0x0019f424: lui $a0, 4
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019f434: addu.qb $zero, $sp, $s1
    thunk_func_0018dab0();  // 18dab0                          // 0x0019f43c: jal 0x18dab0
    func_0018db00();  // 18db00                                // 0x0019f448: jal 0x18db00
    a1 = 0x4000;                                                // 0x0019f454: addiu $a1, $zero, 0x4000
    func_00189b20();  // 189b20                                // 0x0019f458: jal 0x189b20
    v0 = s0 << 6;                                               // 0x0019f460: sll $v0, $s0, 6
label_0x19f464:
    a0 = sp + 0x40;                                             // 0x0019f464: addiu $a0, $sp, 0x40
    a2 = 0x10;                                                  // 0x0019f474: addiu $a2, $zero, 0x10
    t2 = 0x400;                                                 // 0x0019f480: addiu $t2, $zero, 0x400
    func_00113448();  // 113448                                // 0x0019f484: jal 0x113448
    t3 = 0x40;                                                  // 0x0019f488: addiu $t3, $zero, 0x40
    iFlushCache();  // 0x114560                                 // 0x0019f48c: jal 0x114560
    a0 = sp + 0x40;                                             // 0x0019f494: addiu $a0, $sp, 0x40
    func_00113630();  // 113630                                // 0x0019f498: jal 0x113630
    func_00113130();  // 113130                                // 0x0019f4a4: jal 0x113130
    s0 = s0 + 1;                                                // 0x0019f4ac: addiu $s0, $s0, 1
    v0 = ((unsigned)s0 < (unsigned)0x10) ? 1 : 0;               // 0x0019f4b0: sltiu $v0, $s0, 0x10
    if (v0 != 0) goto label_0x19f464;                           // 0x0019f4b4: bnez $v0, 0x19f464
    v0 = s0 << 6;                                               // 0x0019f4b8: sll $v0, $s0, 6
    thunk_func_0018daf0();  // 18daf0                          // 0x0019f4bc: jal 0x18daf0
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0019f4c8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0019f4cc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019f4d0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019f4d4: jr $ra
    sp = sp + 0xa0;                                             // 0x0019f4d8: addiu $sp, $sp, 0xa0
}