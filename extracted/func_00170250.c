void func_00170250() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00170250: addiu $sp, $sp, -0x20
    func_00169ba0();  // 0x169b88                                // 0x00170260: jal 0x169b88
    a1 = *(int32_t*)((s0) + 0x1b30);                            // 0x00170268: lw $a1, 0x1b30($s0)
    v0 = *(int32_t*)((a1) + 0x138);                             // 0x00170270: lw $v0, 0x138($a1)
    if (v0 <= 0) goto label_0x1702bc;                           // 0x00170274: blez $v0, 0x1702bc
    a0 = a1 + 0x13c;                                            // 0x00170278: addiu $a0, $a1, 0x13c
    a3 = 2;                                                     // 0x00170280: addiu $a3, $zero, 2
    a2 = 4;                                                     // 0x00170284: addiu $a2, $zero, 4
    v0 = *(int32_t*)(a0);                                       // 0x00170288: lw $v0, 0($a0)
    /* nop */                                                   // 0x0017028c: nop 
    if (v0 == a3) goto label_0x1702a0;                          // 0x00170290: beq $v0, $a3, 0x1702a0
    a0 = a0 + 0x80;                                             // 0x00170294: addiu $a0, $a0, 0x80
    if (v0 != a2) goto label_0x1702a8;                          // 0x00170298: bnel $v0, $a2, 0x1702a8
    v1 = v1 + -1;                                               // 0x0017029c: addiu $v1, $v1, -1
label_0x1702a0:
    s0 = s0 + 1;                                                // 0x001702a0: addiu $s0, $s0, 1
    v1 = v1 + -1;                                               // 0x001702a4: addiu $v1, $v1, -1
label_0x1702a8:
    /* nop */                                                   // 0x001702a8: nop 
    /* nop */                                                   // 0x001702ac: nop 
    /* nop */                                                   // 0x001702b0: nop 
    /* bnezl $v1, 0x170290 */                                   // 0x001702b4: bnezl $v1, 0x170290
    v0 = *(int32_t*)(a0);                                       // 0x001702b8: lw $v0, 0($a0)
label_0x1702bc:
    v1 = *(int32_t*)((a1) + 0x7c);                              // 0x001702bc: lw $v1, 0x7c($a1)
    v0 = 1;                                                     // 0x001702c0: addiu $v0, $zero, 1
    if (v1 != v0) goto label_0x1702d0;                          // 0x001702c4: bne $v1, $v0, 0x1702d0
    v0 = -1;                                                    // 0x001702c8: addiu $v0, $zero, -1
    if (s0 == 0) s0 = v0;                                       // 0x001702cc: movz $s0, $v0, $s0
label_0x1702d0:
    func_00169bc8();  // 0x169ba0                                // 0x001702d0: jal 0x169ba0
    return;                                                     // 0x001702e4: jr $ra
    sp = sp + 0x20;                                             // 0x001702e8: addiu $sp, $sp, 0x20
}