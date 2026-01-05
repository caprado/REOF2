void func_001261a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001261a0: addiu $sp, $sp, -0x10
    return func_001413a8();  // Tail call                        // 0x001261ac: j 0x141390
    sp = sp + 0x10;                                             // 0x001261b0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001261b4: nop 
    sp = sp + -0x10;                                            // 0x001261b8: addiu $sp, $sp, -0x10
    return func_001413c0();  // Tail call                        // 0x001261c4: j 0x1413a8
    sp = sp + 0x10;                                             // 0x001261c8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001261cc: nop 
    sp = sp + -0x40;                                            // 0x001261d0: addiu $sp, $sp, -0x40
    *(float*)((sp) + 0x38) = FPU_F22;  // Store float           // 0x001261d4: swc1 $f22, 0x38($sp)
    at = 0x4000 << 16;                                          // 0x001261d8: lui $at, 0x4000
    /* move to FPU: $at, $f22 */                                // 0x001261dc: mtc1 $at, $f22
    *(float*)((sp) + 0x28) = FPU_F20;  // Store float           // 0x001261e0: swc1 $f20, 0x28($sp)
    /* nop */                                                   // 0x001261e4: nop 
    /* nop */                                                   // 0x001261e8: nop 
    *(float*)((sp) + 0x30) = FPU_F21;  // Store float           // 0x0012620c: swc1 $f21, 0x30($sp)
    /* FPU: mov.s $f12, $f22 */                                 // 0x00126218: mov.s $f12, $f22
    /* FPU: c.eq.s $f20, $f20 */                                // 0x0012621c: c.eq.s $f20, $f20
    /* bc1t 0x126234 */                                         // 0x00126220: bc1t 0x126234
    /* FPU: mov.s $f21, $f20 */                                 // 0x00126224: mov.s $f21, $f20
    func_001223c8();  // 1223c8                                // 0x00126228: jal 0x1223c8
    /* nop */                                                   // 0x0012622c: nop 
    /* FPU: mov.s $f21, $f0 */                                  // 0x00126230: mov.s $f21, $f0
    /* move to FPU: $s0, $f12 */                                // 0x00126234: mtc1 $s0, $f12
    /* FPU: cvt.s.w $f12, $f12 */                               // 0x00126238: cvt.s.w $f12, $f12
    at = 0x40c9 << 16;                                          // 0x0012623c: lui $at, 0x40c9
    at = at | 0xfda;                                            // 0x00126240: ori $at, $at, 0xfda
    /* move to FPU: $at, $f0 */                                 // 0x00126244: mtc1 $at, $f0
    /* move to FPU: $s1, $f1 */                                 // 0x00126248: mtc1 $s1, $f1
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x0012624c: cvt.s.w $f1, $f1
    /* FPU: mul.s $f12, $f12, $f0 */                            // 0x00126250: mul.s $f12, $f12, $f0
    /* nop */                                                   // 0x00126254: nop 
    /* nop */                                                   // 0x00126258: nop 
    /* FPU: div.s $f12, $f12, $f1 */                            // 0x0012625c: div.s $f12, $f12, $f1
    func_00122090();  // 122090                                // 0x00126260: jal 0x122090
    /* nop */                                                   // 0x00126264: nop 
    /* FPU: mov.s $f12, $f22 */                                 // 0x00126268: mov.s $f12, $f22
    /* FPU: mov.s $f1, $f20 */                                  // 0x0012626c: mov.s $f1, $f20
    /* FPU: c.eq.s $f1, $f1 */                                  // 0x00126270: c.eq.s $f1, $f1
    /* bc1t 0x126288 */                                         // 0x00126274: bc1t 0x126288
    /* FPU: sub.s $f21, $f21, $f0 */                            // 0x00126278: sub.s $f21, $f21, $f0
    func_001223c8();  // 1223c8                                // 0x0012627c: jal 0x1223c8
    /* nop */                                                   // 0x00126280: nop 
    /* FPU: mov.s $f1, $f0 */                                   // 0x00126284: mov.s $f1, $f0
    at = 0x3f80 << 16;                                          // 0x00126288: lui $at, 0x3f80
    /* move to FPU: $at, $f0 */                                 // 0x0012628c: mtc1 $at, $f0
    /* FPU: sub.s $f20, $f1, $f0 */                             // 0x00126290: sub.s $f20, $f1, $f0
    /* FPU: sub.s $f0, $f21, $f20 */                            // 0x00126294: sub.s $f0, $f21, $f20
    /* FPU: add.s $f12, $f21, $f20 */                           // 0x00126298: add.s $f12, $f21, $f20
    /* FPU: mul.s $f12, $f12, $f0 */                            // 0x0012629c: mul.s $f12, $f12, $f0
    /* nop */                                                   // 0x001262a0: nop 
    /* nop */                                                   // 0x001262a4: nop 
    /* FPU: c.eq.s $f0, $f0 */                                  // 0x001262ac: c.eq.s $f0, $f0
    /* bc1tl 0x1262c4 */                                        // 0x001262b0: bc1tl 0x1262c4
    /* FPU: sub.s $f0, $f21, $f0 */                             // 0x001262b4: sub.s $f0, $f21, $f0
    func_001223c8();  // 1223c8                                // 0x001262b8: jal 0x1223c8
    /* nop */                                                   // 0x001262bc: nop 
    /* FPU: sub.s $f0, $f21, $f0 */                             // 0x001262c0: sub.s $f0, $f21, $f0
    FPU_F21 = *(float*)((sp) + 0x30);  // Load float            // 0x001262c4: lwc1 $f21, 0x30($sp)
    at = 0x4580 << 16;                                          // 0x001262c8: lui $at, 0x4580
    /* move to FPU: $at, $f3 */                                 // 0x001262cc: mtc1 $at, $f3
    /* nop */                                                   // 0x001262d8: nop 
    /* nop */                                                   // 0x001262dc: nop 
    /* FPU: div.s $f0, $f0, $f20 */                             // 0x001262e0: div.s $f0, $f0, $f20
    FPU_F20 = *(float*)((sp) + 0x28);  // Load float            // 0x001262e4: lwc1 $f20, 0x28($sp)
    FPU_F22 = *(float*)((sp) + 0x38);  // Load float            // 0x001262ec: lwc1 $f22, 0x38($sp)
    /* FPU: neg.s $f1, $f0 */                                   // 0x001262f0: neg.s $f1, $f0
    /* FPU: add.s $f2, $f0, $f0 */                              // 0x001262f4: add.s $f2, $f0, $f0
    /* FPU: mul.s $f1, $f1, $f0 */                              // 0x001262f8: mul.s $f1, $f1, $f0
    /* FPU: mul.s $f2, $f2, $f3 */                              // 0x001262fc: mul.s $f2, $f2, $f3
    /* FPU: mul.s $f1, $f1, $f3 */                              // 0x00126300: mul.s $f1, $f1, $f3
    /* FPU: cvt.w.s $f0, $f2 */                                 // 0x00126304: cvt.w.s $f0, $f2
    /* move from FPU: $v0, $f0 */                               // 0x00126308: mfc1 $v0, $f0
    /* FPU: cvt.w.s $f0, $f1 */                                 // 0x0012630c: cvt.w.s $f0, $f1
    /* move from FPU: $v1, $f0 */                               // 0x00126310: mfc1 $v1, $f0
    *(uint16_t*)(s3) = v0;                                      // 0x00126314: sh $v0, 0($s3)
    *(uint16_t*)(s2) = v1;                                      // 0x0012631c: sh $v1, 0($s2)
    return;                                                     // 0x00126324: jr $ra
    sp = sp + 0x40;                                             // 0x00126328: addiu $sp, $sp, 0x40
}