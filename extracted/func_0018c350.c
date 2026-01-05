void func_0018c350() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0018c350: addiu $sp, $sp, -0x20
    a1 = a0 + -1;                                               // 0x0018c354: addiu $a1, $a0, -1
    v1 = a1 << 1;                                               // 0x0018c35c: sll $v1, $a1, 1
    v1 = v1 + a1;                                               // 0x0018c364: addu $v1, $v1, $a1
    v0 = *(int32_t*)((gp) + -0x64c0);                           // 0x0018c368: lw $v0, -0x64c0($gp)
    v1 = v1 << 7;                                               // 0x0018c36c: sll $v1, $v1, 7
    if (a0 != 0) goto label_0x18c380;                           // 0x0018c370: bnez $a0, 0x18c380
    s0 = v0 + v1;                                               // 0x0018c374: addu $s0, $v0, $v1
    goto label_0x18c3fc;                                        // 0x0018c378: b 0x18c3fc
label_0x18c380:
    at = ((unsigned)a0 < (unsigned)0x281) ? 1 : 0;              // 0x0018c380: sltiu $at, $a0, 0x281
    if (at != 0) goto label_0x18c394;                           // 0x0018c384: bnez $at, 0x18c394
    goto label_0x18c400;                                        // 0x0018c38c: b 0x18c400
label_0x18c394:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x0018c394: lw $v0, 4($s0)
    if (v0 != 0) goto label_0x18c3a8;                           // 0x0018c398: bnez $v0, 0x18c3a8
    goto label_0x18c3fc;                                        // 0x0018c3a0: b 0x18c3fc
    /* nop */                                                   // 0x0018c3a4: nop 
label_0x18c3a8:
    func_0018d530();  // 18d530                                // 0x0018c3a8: jal 0x18d530
    /* nop */                                                   // 0x0018c3ac: nop 
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x0018c3b0: sw $zero, 4($s0)
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x0018c3b4: lw $a0, 0x14($s0)
    if (a0 == 0) goto label_0x18c3c8;                           // 0x0018c3b8: beqz $a0, 0x18c3c8
    /* nop */                                                   // 0x0018c3bc: nop 
    thunk_func_0018daf0();  // 18daf0                          // 0x0018c3c0: jal 0x18daf0
    /* nop */                                                   // 0x0018c3c4: nop 
label_0x18c3c8:
    a0 = *(int32_t*)((s0) + 0x1c);                              // 0x0018c3c8: lw $a0, 0x1c($s0)
    if (a0 == 0) goto label_0x18c3dc;                           // 0x0018c3cc: beqz $a0, 0x18c3dc
    /* nop */                                                   // 0x0018c3d0: nop 
    thunk_func_0018daf0();  // 18daf0                          // 0x0018c3d4: jal 0x18daf0
    /* nop */                                                   // 0x0018c3d8: nop 
label_0x18c3dc:
    func_0018d9e0();  // 18d9e0                                // 0x0018c3e4: jal 0x18d9e0
    a2 = 0x180;                                                 // 0x0018c3e8: addiu $a2, $zero, 0x180
    v1 = *(int32_t*)((gp) + -0x64c4);                           // 0x0018c3ec: lw $v1, -0x64c4($gp)
    v0 = 1;                                                     // 0x0018c3f0: addiu $v0, $zero, 1
    v1 = v1 + -1;                                               // 0x0018c3f4: addiu $v1, $v1, -1
    *(uint32_t*)((gp) + -0x64c4) = v1;                          // 0x0018c3f8: sw $v1, -0x64c4($gp)
label_0x18c3fc:
label_0x18c400:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0018c400: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0018c404: jr $ra
    sp = sp + 0x20;                                             // 0x0018c408: addiu $sp, $sp, 0x20
}