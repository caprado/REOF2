void func_0017c480() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017c480: addiu $sp, $sp, -0x10
    a2 = *(int32_t*)((a0) + 0x3c);                              // 0x0017c488: lw $a2, 0x3c($a0)
    a1 = *(int32_t*)((a1) + 0x4c);                              // 0x0017c48c: lw $a1, 0x4c($a1)
    a0 = *(int32_t*)((a0) + 0x24);                              // 0x0017c490: lw $a0, 0x24($a0)
    return func_0017db70();  // Tail call                        // 0x0017c498: j 0x17db20
    sp = sp + 0x10;                                             // 0x0017c49c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0017c4a0: addiu $sp, $sp, -0x10
    a2 = *(int32_t*)((a0) + 0x3c);                              // 0x0017c4a8: lw $a2, 0x3c($a0)
    a1 = *(int32_t*)((a1) + 0x4c);                              // 0x0017c4ac: lw $a1, 0x4c($a1)
    a0 = *(int32_t*)((a0) + 0x24);                              // 0x0017c4b0: lw $a0, 0x24($a0)
    return func_0017dde0();  // Tail call                        // 0x0017c4b8: j 0x17dd90
    sp = sp + 0x10;                                             // 0x0017c4bc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0017c4c0: addiu $sp, $sp, -0x10
    a0 = *(int32_t*)((a0) + 0x3c);                              // 0x0017c4c8: lw $a0, 0x3c($a0)
    goto label_0x17c4d8;                                        // 0x0017c4d0: j 0x17c4d8
    sp = sp + 0x10;                                             // 0x0017c4d4: addiu $sp, $sp, 0x10
label_0x17c4d8:
    a1 = 0xf;                                                   // 0x0017c4d8: addiu $a1, $zero, 0xf
    v0 = a0 + 0xf;                                              // 0x0017c4dc: addiu $v0, $a0, 0xf
label_0x17c4e0:
    a1 = a1 + -1;                                               // 0x0017c4e0: addiu $a1, $a1, -1
    *(uint8_t*)(v0) = 0;                                        // 0x0017c4e4: sb $zero, 0($v0)
    /* nop */                                                   // 0x0017c4e8: nop 
    /* nop */                                                   // 0x0017c4ec: nop 
    /* nop */                                                   // 0x0017c4f0: nop 
    if (a1 >= 0) goto label_0x17c4e0;                           // 0x0017c4f4: bgez $a1, 0x17c4e0
    v0 = v0 + -1;                                               // 0x0017c4f8: addiu $v0, $v0, -1
    at = 0x3f14 << 16;                                          // 0x0017c4fc: lui $at, 0x3f14
    at = at | 0xfdf3;                                           // 0x0017c500: ori $at, $at, 0xfdf3
    /* move to FPU: $at, $f2 */                                 // 0x0017c504: mtc1 $at, $f2
    a1 = 0x10;                                                  // 0x0017c508: addiu $a1, $zero, 0x10
    at = 0x4f00 << 16;                                          // 0x0017c50c: lui $at, 0x4f00
    /* move to FPU: $at, $f1 */                                 // 0x0017c510: mtc1 $at, $f1
    a3 = 0x8000 << 16;                                          // 0x0017c514: lui $a3, 0x8000
label_0x17c518:
    v0 = a1 + -0x10;                                            // 0x0017c518: addiu $v0, $a1, -0x10
    a2 = a0 + a1;                                               // 0x0017c51c: addu $a2, $a0, $a1
    /* move to FPU: $v0, $f0 */                                 // 0x0017c520: mtc1 $v0, $f0
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x0017c524: cvt.s.w $f0, $f0
    a1 = a1 + 1;                                                // 0x0017c528: addiu $a1, $a1, 1
    /* FPU: mul.s $f0, $f0, $f2 */                              // 0x0017c52c: mul.s $f0, $f0, $f2
    /* FPU: c.ole.s $f1, $f0 */                                 // 0x0017c530: c.ole.s $f1, $f0
    /* FPU: cvt.w.s $f3, $f0 */                                 // 0x0017c534: cvt.w.s $f3, $f0
    /* move from FPU: $v0, $f3 */                               // 0x0017c538: mfc1 $v0, $f3
    /* bc1f 0x17c554 */                                         // 0x0017c53c: bc1f 0x17c554
    v1 = (a1 < 0xec) ? 1 : 0;                                   // 0x0017c540: slti $v1, $a1, 0xec
    /* FPU: sub.s $f0, $f0, $f1 */                              // 0x0017c544: sub.s $f0, $f0, $f1
    /* FPU: cvt.w.s $f3, $f0 */                                 // 0x0017c548: cvt.w.s $f3, $f0
    /* move from FPU: $v0, $f3 */                               // 0x0017c54c: mfc1 $v0, $f3
    v0 = v0 | a3;                                               // 0x0017c550: or $v0, $v0, $a3
    if (v1 != 0) goto label_0x17c518;                           // 0x0017c554: bnez $v1, 0x17c518
    *(uint8_t*)(a2) = v0;                                       // 0x0017c558: sb $v0, 0($a2)
    a1 = 0xec;                                                  // 0x0017c55c: addiu $a1, $zero, 0xec
    a2 = -0x80;                                                 // 0x0017c560: addiu $a2, $zero, -0x80
    /* nop */                                                   // 0x0017c564: nop 
label_0x17c568:
    v1 = a0 + a1;                                               // 0x0017c568: addu $v1, $a0, $a1
    a1 = a1 + 1;                                                // 0x0017c56c: addiu $a1, $a1, 1
    v0 = (a1 < 0x100) ? 1 : 0;                                  // 0x0017c570: slti $v0, $a1, 0x100
    /* nop */                                                   // 0x0017c574: nop 
    /* nop */                                                   // 0x0017c578: nop 
    if (v0 != 0) goto label_0x17c568;                           // 0x0017c57c: bnez $v0, 0x17c568
    *(uint8_t*)(v1) = a2;                                       // 0x0017c580: sb $a2, 0($v1)
    return;                                                     // 0x0017c584: jr $ra
    /* nop */                                                   // 0x0017c588: nop 
}