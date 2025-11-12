void func_001d0140() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001d0140: addiu $sp, $sp, -0x20
    v1 = *(int32_t*)((a1) + 0xc);                               // 0x001d014c: lw $v1, 0xc($a1)
    v0 = *(int32_t*)((a1) + 0x10);                              // 0x001d0150: lw $v0, 0x10($a1)
    v0 = v0 - v1;                                               // 0x001d0154: subu $v0, $v0, $v1
    at = (v0 < 0x385) ? 1 : 0;                                  // 0x001d0158: slti $at, $v0, 0x385
    if (at != 0) goto label_0x1d0168;                           // 0x001d015c: bnez $at, 0x1d0168
    v0 = 0x384;                                                 // 0x001d0164: addiu $v0, $zero, 0x384
label_0x1d0168:
    v0 = *(int32_t*)((s0) + 8);                                 // 0x001d016c: lw $v0, 8($s0)
    func_001c9220();  // 0x1c91f0                                // 0x001d0174: jal 0x1c91f0
    a1 = v0 + v1;                                               // 0x001d0178: addu $a1, $v0, $v1
    if (v0 <= 0) goto label_0x1d0190;                           // 0x001d017c: blez $v0, 0x1d0190
    /* nop */                                                   // 0x001d0180: nop 
    v1 = *(int32_t*)((s0) + 0xc);                               // 0x001d0184: lw $v1, 0xc($s0)
    v1 = v1 + v0;                                               // 0x001d0188: addu $v1, $v1, $v0
    *(uint32_t*)((s0) + 0xc) = v1;                              // 0x001d018c: sw $v1, 0xc($s0)
label_0x1d0190:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d0194: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d0198: jr $ra
    sp = sp + 0x20;                                             // 0x001d019c: addiu $sp, $sp, 0x20
}