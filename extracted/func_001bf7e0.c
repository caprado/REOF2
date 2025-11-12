void func_001bf7e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bf7e0: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x001bf7e4: addiu $v0, $zero, 1
    v1 = *(int32_t*)((a0) + 4);                                 // 0x001bf7f0: lw $v1, 4($a0)
    if (v1 == v0) goto label_0x1bf854;                          // 0x001bf7f4: beq $v1, $v0, 0x1bf854
    if (v1 == 0) goto label_0x1bf80c;                           // 0x001bf7fc: beqz $v1, 0x1bf80c
    /* nop */                                                   // 0x001bf800: nop 
    goto label_0x1bf878;                                        // 0x001bf804: b 0x1bf878
    v0 = -1;                                                    // 0x001bf808: addiu $v0, $zero, -1
label_0x1bf80c:
    func_001bf010();  // 0x1befe0                                // 0x001bf80c: jal 0x1befe0
    /* nop */                                                   // 0x001bf810: nop 
    if (v0 < 0) goto label_0x1bf874;                            // 0x001bf814: bltz $v0, 0x1bf874
    /* nop */                                                   // 0x001bf818: nop 
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001bf81c: lw $v1, 0x14($s0)
    v0 = gp + -0x6300;                                          // 0x001bf820: addiu $v0, $gp, -0x6300
    v1 = v1 << 2;                                               // 0x001bf824: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001bf828: addu $v0, $v0, $v1
    func_00180e58();  // 0x180da8                                // 0x001bf82c: jal 0x180da8
    a0 = *(int32_t*)(v0);                                       // 0x001bf830: lw $a0, 0($v0)
    if (v0 >= 0) goto label_0x1bf844;                           // 0x001bf834: bgez $v0, 0x1bf844
    /* nop */                                                   // 0x001bf838: nop 
    goto label_0x1bf878;                                        // 0x001bf83c: b 0x1bf878
    v0 = 1;                                                     // 0x001bf840: addiu $v0, $zero, 1
label_0x1bf844:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001bf844: lw $v0, 4($s0)
    v0 = v0 + 1;                                                // 0x001bf848: addiu $v0, $v0, 1
    goto label_0x1bf874;                                        // 0x001bf84c: b 0x1bf874
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001bf850: sw $v0, 4($s0)
label_0x1bf854:
    func_001bf010();  // 0x1befe0                                // 0x001bf854: jal 0x1befe0
    /* nop */                                                   // 0x001bf858: nop 
    if (v0 < 0) goto label_0x1bf874;                            // 0x001bf85c: bltz $v0, 0x1bf874
    /* nop */                                                   // 0x001bf860: nop 
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001bf864: sw $zero, 4($s0)
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x001bf868: lw $v0, 0x1c($s0)
    goto label_0x1bf878;                                        // 0x001bf86c: b 0x1bf878
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x001bf870: slt $v0, $v0, $zero
label_0x1bf874:
    v0 = -1;                                                    // 0x001bf874: addiu $v0, $zero, -1
label_0x1bf878:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bf87c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bf880: jr $ra
    sp = sp + 0x20;                                             // 0x001bf884: addiu $sp, $sp, 0x20
}