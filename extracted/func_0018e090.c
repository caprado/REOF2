void func_0018e090() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xb0;                                            // 0x0018e090: addiu $sp, $sp, -0xb0
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x0018e09c: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0018e0a8: addu.qb $zero, $sp, $s1
    func_0019ceb0();  // 0x19ce60                                // 0x0018e0b0: jal 0x19ce60
    a0 = sp + 0x60;                                             // 0x0018e0bc: addiu $a0, $sp, 0x60
    v0 = v0 & 0xffff;                                           // 0x0018e0c0: andi $v0, $v0, 0xffff
    a1 = v0 + -1;                                               // 0x0018e0c4: addiu $a1, $v0, -1
    v1 = a1 << 3;                                               // 0x0018e0c8: sll $v1, $a1, 3
    v0 = 0x29 << 16;                                            // 0x0018e0cc: lui $v0, 0x29
    v1 = v1 - a1;                                               // 0x0018e0d0: subu $v1, $v1, $a1
    v0 = v0 + -0x7380;                                          // 0x0018e0d4: addiu $v0, $v0, -0x7380
    v1 = v1 << 3;                                               // 0x0018e0d8: sll $v1, $v1, 3
    func_001a4970();  // 0x1a4890                                // 0x0018e0e0: jal 0x1a4890
    s2 = v0 + v1;                                               // 0x0018e0e4: addu $s2, $v0, $v1
    s1 = sp + 0x74;                                             // 0x0018e0e8: addiu $s1, $sp, 0x74
    v0 = 3;                                                     // 0x0018e0ec: addiu $v0, $zero, 3
    v1 = *(int32_t*)(s1);                                       // 0x0018e0f0: lw $v1, 0($s1)
    if (v1 == v0) goto label_0x18e104;                          // 0x0018e0f4: beq $v1, $v0, 0x18e104
    a0 = sp + 0x60;                                             // 0x0018e0f8: addiu $a0, $sp, 0x60
    goto label_0x18e1ec;                                        // 0x0018e0fc: b 0x18e1ec
label_0x18e104:
    a1 = 1;                                                     // 0x0018e104: addiu $a1, $zero, 1
    func_0019ca80();  // 0x19c870                                // 0x0018e10c: jal 0x19c870
    a0 = *(int32_t*)((s2) + 8);                                 // 0x0018e114: lw $a0, 8($s2)
    thunk_func_001a0a20();  // 0x18dab0                          // 0x0018e118: jal 0x18dab0
    a1 = 2;                                                     // 0x0018e11c: addiu $a1, $zero, 2
    *(uint32_t*)((s2) + 0x24) = v0;                             // 0x0018e120: sw $v0, 0x24($s2)
    func_0018db10();  // 0x18db00                                // 0x0018e124: jal 0x18db00
    a0 = *(int32_t*)((s2) + 0x24);                              // 0x0018e128: lw $a0, 0x24($s2)
    func_001a49c0();  // 0x1a4970                                // 0x0018e130: jal 0x1a4970
    a0 = *(int32_t*)(s1);                                       // 0x0018e138: lw $a0, 0($s1)
    v1 = 3;                                                     // 0x0018e13c: addiu $v1, $zero, 3
    if (a0 == v1) goto label_0x18e150;                          // 0x0018e140: beq $a0, $v1, 0x18e150
    goto label_0x18e1d8;                                        // 0x0018e148: b 0x18e1d8
label_0x18e150:
    a0 = sp + 0x68;                                             // 0x0018e150: addiu $a0, $sp, 0x68
    v1 = sp + 0x6c;                                             // 0x0018e154: addiu $v1, $sp, 0x6c
    goto label_0x18e1c0;                                        // 0x0018e158: b 0x18e1c0
    t1 = sp + 0x64;                                             // 0x0018e15c: addiu $t1, $sp, 0x64
label_0x18e160:
    goto label_0x18e1ac;                                        // 0x0018e160: b 0x18e1ac
label_0x18e168:
    t0 = *(int32_t*)(a0);                                       // 0x0018e168: lw $t0, 0($a0)
    a2 = *(int32_t*)(s1);                                       // 0x0018e16c: lw $a2, 0($s1)
    a3 = *(int32_t*)(v1);                                       // 0x0018e170: lw $a3, 0($v1)
    t0 = t0 + -1;                                               // 0x0018e174: addiu $t0, $t0, -1
    t0 = t0 - a1;                                               // 0x0018e178: subu $t0, $t0, $a1
    a2 = v0 + a2;                                               // 0x0018e184: addu $a2, $v0, $a2
    t2 = t2 + 1;                                                // 0x0018e188: addiu $t2, $t2, 1
    a2 = a2 + a3;                                               // 0x0018e18c: addu $a2, $a2, $a3
    t0 = *(uint8_t*)(a2);                                       // 0x0018e190: lbu $t0, 0($a2)
    a3 = *(uint8_t*)((a2) + 1);                                 // 0x0018e194: lbu $a3, 1($a2)
    a2 = *(uint8_t*)((a2) + 2);                                 // 0x0018e198: lbu $a2, 2($a2)
    *(uint8_t*)(s2) = a2;                                       // 0x0018e19c: sb $a2, 0($s2)
    *(uint8_t*)((s2) + 1) = a3;                                 // 0x0018e1a0: sb $a3, 1($s2)
    *(uint8_t*)((s2) + 2) = t0;                                 // 0x0018e1a4: sb $t0, 2($s2)
    s2 = s2 + 3;                                                // 0x0018e1a8: addiu $s2, $s2, 3
label_0x18e1ac:
    a2 = *(int32_t*)(t1);                                       // 0x0018e1ac: lw $a2, 0($t1)
    a2 = (t2 < a2) ? 1 : 0;                                     // 0x0018e1b0: slt $a2, $t2, $a2
    if (a2 != 0) goto label_0x18e168;                           // 0x0018e1b4: bnez $a2, 0x18e168
    /* nop */                                                   // 0x0018e1b8: nop 
    a1 = a1 + 1;                                                // 0x0018e1bc: addiu $a1, $a1, 1
label_0x18e1c0:
    a2 = *(int32_t*)(a0);                                       // 0x0018e1c0: lw $a2, 0($a0)
    a2 = (a1 < a2) ? 1 : 0;                                     // 0x0018e1c4: slt $a2, $a1, $a2
    if (a2 != 0) goto label_0x18e160;                           // 0x0018e1c8: bnez $a2, 0x18e160
    /* nop */                                                   // 0x0018e1cc: nop 
    goto label_0x18e1e0;                                        // 0x0018e1d0: b 0x18e1e0
label_0x18e1d8:
    goto label_0x18e1f0;                                        // 0x0018e1d8: b 0x18e1f0
label_0x18e1e0:
    func_0019cb80();  // 0x19ca80                                // 0x0018e1e0: jal 0x19ca80
label_0x18e1ec:
label_0x18e1f0:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x0018e1f0: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x0018e1f8: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x0018e1fc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018e200: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018e204: jr $ra
    sp = sp + 0xb0;                                             // 0x0018e208: addiu $sp, $sp, 0xb0
}