/** @category: game/menu @status: complete @author: caprado */
void func_001ba0f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001ba0f0: addiu $sp, $sp, -0x20
    at = 0x30 << 16;                                            // 0x001ba0f4: lui $at, 0x30
    v1 = g_00307f90;  // Global at 0x00307f90                   // 0x001ba100: lbu $v1, 0x7f90($at)
    s0 = 0x30 << 16;                                            // 0x001ba104: lui $s0, 0x30
    if (v1 == 0) goto label_0x1ba19c;                           // 0x001ba108: beqz $v1, 0x1ba19c
    s0 = s0 + 0x7f90;                                           // 0x001ba10c: addiu $s0, $s0, 0x7f90
    v1 = g_00307fa0;  // Global at 0x00307fa0                   // 0x001ba110: lw $v1, 0x10($s0)
    if (v1 == 0) goto label_0x1ba19c;                           // 0x001ba114: beqz $v1, 0x1ba19c
    /* nop */                                                   // 0x001ba118: nop 
    at = 0x31 << 16;                                            // 0x001ba11c: lui $at, 0x31
    v1 = g_00307f9c;  // Global at 0x00307f9c                   // 0x001ba120: lh $v1, 0xc($s0)
    a2 = g_003137ac;  // Global at 0x003137ac                   // 0x001ba124: lbu $a2, 0x37ac($at)
    a1 = 1;                                                     // 0x001ba128: addiu $a1, $zero, 1
    a1 = a1 << a2;                                              // 0x001ba12c: sllv $a1, $a1, $a2
    v1 = v1 - a1;                                               // 0x001ba138: subu $v1, $v1, $a1
    g_00307f9c = v1;  // Global at 0x00307f9c                   // 0x001ba13c: sh $v1, 0xc($s0)
    v1 = g_00307f9c;  // Global at 0x00307f9c                   // 0x001ba140: lh $v1, 0xc($s0)
    if (v1 > 0) goto label_0x1ba1a4;                            // 0x001ba144: bgtz $v1, 0x1ba1a4
    /* nop */                                                   // 0x001ba148: nop 
    v1 = g_00307f9e;  // Global at 0x00307f9e                   // 0x001ba14c: lh $v1, 0xe($s0)
    v0 = g_00307fa0;  // Global at 0x00307fa0                   // 0x001ba150: lw $v0, 0x10($s0)
    v1 = v1 << 3;                                               // 0x001ba154: sll $v1, $v1, 3
    v0 = v0 + v1;                                               // 0x001ba158: addu $v0, $v0, $v1
    v0 = *(int16_t*)(v0);                                       // 0x001ba15c: lh $v0, 0($v0)
    g_00307f9c = v0;  // Global at 0x00307f9c                   // 0x001ba160: sh $v0, 0xc($s0)
    v0 = g_00307f9c;  // Global at 0x00307f9c                   // 0x001ba164: lh $v0, 0xc($s0)
    if (v0 == 0) goto label_0x1ba19c;                           // 0x001ba168: beqz $v0, 0x1ba19c
    /* nop */                                                   // 0x001ba16c: nop 
    v0 = g_00307f9e;  // Global at 0x00307f9e                   // 0x001ba170: lh $v0, 0xe($s0)
    v1 = g_00307fa0;  // Global at 0x00307fa0                   // 0x001ba174: lw $v1, 0x10($s0)
    v0 = v0 << 3;                                               // 0x001ba178: sll $v0, $v0, 3
    v0 = v0 + v1;                                               // 0x001ba17c: addu $v0, $v0, $v1
    func_001ba070();  // 1ba070                                // 0x001ba180: jal 0x1ba070
    a1 = *(int32_t*)((v0) + 4);                                 // 0x001ba184: lw $a1, 4($v0)
    v1 = g_00307f9e;  // Global at 0x00307f9e                   // 0x001ba188: lh $v1, 0xe($s0)
    v1 = v1 + 1;                                                // 0x001ba18c: addiu $v1, $v1, 1
    g_00307f9e = v1;  // Global at 0x00307f9e                   // 0x001ba190: sh $v1, 0xe($s0)
    goto label_0x1ba1a8;                                        // 0x001ba194: b 0x1ba1a8
label_0x1ba19c:
    func_001ba010();  // 1ba010                                // 0x001ba19c: jal 0x1ba010
    /* nop */                                                   // 0x001ba1a0: nop 
label_0x1ba1a4:
label_0x1ba1a8:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ba1a8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ba1ac: jr $ra
    sp = sp + 0x20;                                             // 0x001ba1b0: addiu $sp, $sp, 0x20
}