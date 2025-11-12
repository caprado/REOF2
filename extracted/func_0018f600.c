void func_0018f600() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0018f604: addiu $sp, $sp, -0x10
    a0 = 0x28 << 16;                                            // 0x0018f608: lui $a0, 0x28
    func_00191330();  // 0x1912b0                                // 0x0018f610: jal 0x1912b0
    a0 = a0 + 0x5320;                                           // 0x0018f614: addiu $a0, $a0, 0x5320
    FPU_F2 = *(float*)((gp) + -0x64ac);  // Load float          // 0x0018f618: lwc1 $f2, -0x64ac($gp)
    v1 = 0x3f00 << 16;                                          // 0x0018f61c: lui $v1, 0x3f00
    /* move to FPU: $v1, $f7 */                                 // 0x0018f620: mtc1 $v1, $f7
    at = 0x28 << 16;                                            // 0x0018f624: lui $at, 0x28
    FPU_F6 = *(float*)((gp) + -0x64a8);  // Load float          // 0x0018f628: lwc1 $f6, -0x64a8($gp)
    FPU_F3 = *(float*)((at) + 0x5320);  // Load float           // 0x0018f62c: lwc1 $f3, 0x5320($at)
    v1 = 0x4000 << 16;                                          // 0x0018f630: lui $v1, 0x4000
    FPU_F1 = *(float*)((gp) + -0x64bc);  // Load float          // 0x0018f634: lwc1 $f1, -0x64bc($gp)
    FPU_F5 = *(float*)((gp) + -0x64b8);  // Load float          // 0x0018f638: lwc1 $f5, -0x64b8($gp)
    /* FPU: mul.s $f2, $f7, $f2 */                              // 0x0018f63c: mul.s $f2, $f7, $f2
    at = 0x28 << 16;                                            // 0x0018f640: lui $at, 0x28
    /* FPU: mul.s $f6, $f7, $f6 */                              // 0x0018f644: mul.s $f6, $f7, $f6
    /* FPU: div.s $f1, $f1, $f2 */                              // 0x0018f648: div.s $f1, $f1, $f2
    FPU_F0 = *(float*)((at) + 0x5334);  // Load float           // 0x0018f64c: lwc1 $f0, 0x5334($at)
    /* move to FPU: $v1, $f4 */                                 // 0x0018f650: mtc1 $v1, $f4
    /* nop */                                                   // 0x0018f654: nop 
    /* FPU: div.s $f5, $f5, $f6 */                              // 0x0018f658: div.s $f5, $f5, $f6
    at = 0x28 << 16;                                            // 0x0018f65c: lui $at, 0x28
    /* FPU: mul.s $f2, $f4, $f3 */                              // 0x0018f660: mul.s $f2, $f4, $f3
    /* FPU: mul.s $f0, $f4, $f0 */                              // 0x0018f664: mul.s $f0, $f4, $f0
    /* FPU: div.s $f2, $f2, $f5 */                              // 0x0018f668: div.s $f2, $f2, $f5
    *(float*)((at) + 0x5320) = FPU_F2;  // Store float          // 0x0018f66c: swc1 $f2, 0x5320($at)
    /* FPU: div.s $f0, $f0, $f1 */                              // 0x0018f670: div.s $f0, $f0, $f1
    at = 0x28 << 16;                                            // 0x0018f674: lui $at, 0x28
    *(float*)((at) + 0x5334) = FPU_F0;  // Store float          // 0x0018f678: swc1 $f0, 0x5334($at)
    return;                                                     // 0x0018f680: jr $ra
    sp = sp + 0x10;                                             // 0x0018f684: addiu $sp, $sp, 0x10
}