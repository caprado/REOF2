/** @category: graphics/dma @status: complete @author: caprado */
void func_0018ccc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x0018ccc0: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0018cccc: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0018ccd8: addu.qb $zero, $sp, $s1
    *(uint32_t*)((a0) + 4) = a1;                                // 0x0018cce8: sw $a1, 4($a0)
    s0 = a1 << 2;                                               // 0x0018ccec: sll $s0, $a1, 2
label_0x18ccf0:
    v0 = s1 << 2;                                               // 0x0018ccf0: sll $v0, $s1, 2
    s4 = s3 + v0;                                               // 0x0018ccf8: addu $s4, $s3, $v0
    thunk_func_0018dab0();  // 18dab0                          // 0x0018ccfc: jal 0x18dab0
    a1 = 1;                                                     // 0x0018cd00: addiu $a1, $zero, 1
    *(uint32_t*)((s4) + 0xc) = v0;                              // 0x0018cd04: sw $v0, 0xc($s4)
    s1 = s1 + 1;                                                // 0x0018cd08: addiu $s1, $s1, 1
    *(uint32_t*)((s4) + 0x14) = 0;                              // 0x0018cd0c: sw $zero, 0x14($s4)
    v0 = (s1 < 2) ? 1 : 0;                                      // 0x0018cd10: slti $v0, $s1, 2
    *(uint32_t*)((s4) + 0x1c) = 0;                              // 0x0018cd14: sw $zero, 0x1c($s4)
    if (v0 != 0) goto label_0x18ccf0;                           // 0x0018cd18: bnez $v0, 0x18ccf0
    *(uint32_t*)((s4) + 0x24) = 0;                              // 0x0018cd1c: sw $zero, 0x24($s4)
    a0 = *(int32_t*)(s3);                                       // 0x0018cd20: lw $a0, 0($s3)
    AddDmacHandler();  // 0x113ff0                              // 0x0018cd28: jal 0x113ff0
    *(uint32_t*)((s3) + 8) = v0;                                // 0x0018cd30: sw $v0, 8($s3)
    *(uint32_t*)((s3) + 0x30) = 0;                              // 0x0018cd34: sw $zero, 0x30($s3)
    func_00114ef8();  // 114ef8                                // 0x0018cd38: jal 0x114ef8
    a0 = *(int32_t*)(s3);                                       // 0x0018cd3c: lw $a0, 0($s3)
    a1 = 0x19 << 16;                                            // 0x0018cd40: lui $a1, 0x19
    a1 = a1 + -0x33f0;                                          // 0x0018cd48: addiu $a1, $a1, -0x33f0
    AddIntcHandler2();  // 0x113fc0                             // 0x0018cd4c: jal 0x113fc0
    *(uint32_t*)((gp) + -0x6478) = v0;                          // 0x0018cd54: sw $v0, -0x6478($gp)
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0018cd5c: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0018cd64: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018cd68: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018cd6c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018cd70: jr $ra
    sp = sp + 0x60;                                             // 0x0018cd74: addiu $sp, $sp, 0x60
}