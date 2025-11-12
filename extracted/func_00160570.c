void func_00160570() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x10;                                            // 0x00160570: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((v1) + 0x10);                              // 0x0016057c: lw $v0, 0x10($v1)
    a3 = *(int32_t*)((v1) + 0x134);                             // 0x00160580: lw $a3, 0x134($v1)
    a1 = v0 + 0x3fff;                                           // 0x00160584: addiu $a1, $v0, 0x3fff
    v1 = (v0 < 0) ? 1 : 0;                                      // 0x00160588: slti $v1, $v0, 0
    if (v1 != 0) v0 = a1;                                       // 0x0016058c: movn $v0, $a1, $v1
    v0 = v0 >> 0xe;                                             // 0x00160594: sra $v0, $v0, 0xe
    v0 = v0 << 0xb;                                             // 0x0016059c: sll $v0, $v0, 0xb
    /* move to FPU: $v0, $f0 */                                 // 0x001605a0: mtc1 $v0, $f0
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001605a4: cvt.s.w $f0, $f0
    /* FPU: mul.s $f0, $f0, $f12 */                             // 0x001605a8: mul.s $f0, $f0, $f12
    /* FPU: cvt.w.s $f1, $f0 */                                 // 0x001605ac: cvt.w.s $f1, $f0
    /* move from FPU: $a1, $f1 */                               // 0x001605b0: mfc1 $a1, $f1
    v0 = (a3 < a1) ? 1 : 0;                                     // 0x001605b4: slt $v0, $a3, $a1
    if (v0 != 0) a1 = a3;                                       // 0x001605b8: movn $a1, $a3, $v0
    return func_0015fc30();  // Tail call                        // 0x001605bc: j 0x15fbd8
    sp = sp + 0x10;                                             // 0x001605c0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001605c4: nop 
    sp = sp + -0x20;                                            // 0x001605c8: addiu $sp, $sp, -0x20
    v1 = *(int32_t*)((a0) + 0x44);                              // 0x001605d4: lw $v1, 0x44($a0)
    if (v1 == 0) goto label_0x1605ec;                           // 0x001605d8: beqz $v1, 0x1605ec
    func_00164240();  // 0x164240                               // 0x001605e0: jal 0x164240
    v0 = local_0;                                               // 0x001605e8: lw $v0, 0($sp)
label_0x1605ec:
    return;                                                     // 0x001605f0: jr $ra
    sp = sp + 0x20;                                             // 0x001605f4: addiu $sp, $sp, 0x20
}