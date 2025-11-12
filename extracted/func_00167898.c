void func_00167898() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 << 3;                                               // 0x00167898: sll $v0, $a1, 3
    sp = sp + -0x10;                                            // 0x0016789c: addiu $sp, $sp, -0x10
    v0 = v0 - a1;                                               // 0x001678a0: subu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x001678a8: sll $v0, $v0, 2
    t0 = a0 + 0x1140;                                           // 0x001678ac: addiu $t0, $a0, 0x1140
    v0 = v0 + a1;                                               // 0x001678b0: addu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x001678b8: sll $v0, $v0, 2
    t0 = t0 + v0;                                               // 0x001678bc: addu $t0, $t0, $v0
    v1 = *(int32_t*)((t0) + 4);                                 // 0x001678c0: lw $v1, 4($t0)
    if (v1 != 0) goto label_0x1678e0;                           // 0x001678c4: bnez $v1, 0x1678e0
    a2 = 0xb;                                                   // 0x001678c8: addiu $a2, $zero, 0xb
    a1 = *(int32_t*)((t0) + 0x4c);                              // 0x001678cc: lw $a1, 0x4c($t0)
    return func_00177908();  // Tail call                        // 0x001678d8: j 0x1778a0
    sp = sp + 0x10;                                             // 0x001678dc: addiu $sp, $sp, 0x10
label_0x1678e0:
    return;                                                     // 0x001678e8: jr $ra
    sp = sp + 0x10;                                             // 0x001678ec: addiu $sp, $sp, 0x10
}