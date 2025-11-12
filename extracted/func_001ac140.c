void func_001ac140() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_001a7910();  // Tail call                        // 0x001ac140: j 0x1a77d0
    /* nop */                                                   // 0x001ac144: nop 
    /* nop */                                                   // 0x001ac148: nop 
    /* nop */                                                   // 0x001ac14c: nop 
    return thunk_func_001a77d0();  // Tail call                  // 0x001ac150: j 0x1ac100
    /* nop */                                                   // 0x001ac154: nop 
    /* nop */                                                   // 0x001ac158: nop 
    /* nop */                                                   // 0x001ac15c: nop 
    sp = sp + -0x30;                                            // 0x001ac160: addiu $sp, $sp, -0x30
    v0 = 0x8000 << 16;                                          // 0x001ac164: lui $v0, 0x8000
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ac16c: addu.qb $zero, $sp, $s1
    a0 = v0 | 0xc;                                              // 0x001ac17c: ori $a0, $v0, 0xc
    func_001a7aa0();  // 0x1a7a60                                // 0x001ac180: jal 0x1a7a60
    a1 = 1;                                                     // 0x001ac184: addiu $a1, $zero, 1
    func_001acb70();  // 0x1ac9d0                                // 0x001ac18c: jal 0x1ac9d0
    if (v0 >= 0) goto label_0x1ac1a4;                           // 0x001ac194: bgez $v0, 0x1ac1a4
    goto label_0x1ac208;                                        // 0x001ac19c: b 0x1ac208
label_0x1ac1a4:
    func_001ab1d0();  // 0x1ab180                                // 0x001ac1a4: jal 0x1ab180
    /* nop */                                                   // 0x001ac1a8: nop 
    goto label_0x1ac1c0;                                        // 0x001ac1ac: b 0x1ac1c0
    a0 = 1;                                                     // 0x001ac1b0: addiu $a0, $zero, 1
label_0x1ac1b4:
    func_00113130();  // 0x113098                                // 0x001ac1b4: jal 0x113098
    a0 = 1;                                                     // 0x001ac1bc: addiu $a0, $zero, 1
label_0x1ac1c0:
    func_001a7970();  // 0x1a7910                                // 0x001ac1c0: jal 0x1a7910
    /* nop */                                                   // 0x001ac1c4: nop 
    if (v0 > 0) goto label_0x1ac1b4;                            // 0x001ac1c8: bgtz $v0, 0x1ac1b4
    /* nop */                                                   // 0x001ac1cc: nop 
    goto label_0x1ac1e4;                                        // 0x001ac1d0: b 0x1ac1e4
    v0 = 0x8000 << 16;                                          // 0x001ac1d4: lui $v0, 0x8000
label_0x1ac1d8:
    func_00113130();  // 0x113098                                // 0x001ac1d8: jal 0x113098
    v0 = 0x8000 << 16;                                          // 0x001ac1e0: lui $v0, 0x8000
label_0x1ac1e4:
    a1 = 1;                                                     // 0x001ac1e4: addiu $a1, $zero, 1
    func_001a7aa0();  // 0x1a7a60                                // 0x001ac1e8: jal 0x1a7a60
    a0 = v0 | 0xc;                                              // 0x001ac1ec: ori $a0, $v0, 0xc
    if (v0 > 0) goto label_0x1ac1d8;                            // 0x001ac1f0: bgtz $v0, 0x1ac1d8
    /* nop */                                                   // 0x001ac1f4: nop 
    func_001ab230();  // 0x1ab1d0                                // 0x001ac1f8: jal 0x1ab1d0
    /* nop */                                                   // 0x001ac1fc: nop 
label_0x1ac208:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ac208: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ac20c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ac210: jr $ra
    sp = sp + 0x30;                                             // 0x001ac214: addiu $sp, $sp, 0x30
}