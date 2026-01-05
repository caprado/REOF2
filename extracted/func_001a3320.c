void func_001a3320() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a3320: addiu $sp, $sp, -0x10
    a1 = 5;                                                     // 0x001a332c: addiu $a1, $zero, 5
    func_001a3230();  // 1a3230                                // 0x001a3330: jal 0x1a3230
    if (v0 != 0) goto label_0x1a3348;                           // 0x001a3338: bnez $v0, 0x1a3348
    /* nop */                                                   // 0x001a333c: nop 
    goto label_0x1a338c;                                        // 0x001a3340: b 0x1a338c
    v0 = -1;                                                    // 0x001a3344: addiu $v0, $zero, -1
label_0x1a3348:
    v1 = *(int32_t*)((v0) + 4);                                 // 0x001a3348: lw $v1, 4($v0)
    at = ((unsigned)t0 < (unsigned)v1) ? 1 : 0;                 // 0x001a334c: sltu $at, $t0, $v1
    if (at != 0) goto label_0x1a3360;                           // 0x001a3350: bnez $at, 0x1a3360
    /* nop */                                                   // 0x001a3354: nop 
    goto label_0x1a338c;                                        // 0x001a3358: b 0x1a338c
    v0 = -1;                                                    // 0x001a335c: addiu $v0, $zero, -1
label_0x1a3360:
    v0 = v0 + 0xc;                                              // 0x001a3360: addiu $v0, $v0, 0xc
    goto label_0x1a3378;                                        // 0x001a3364: b 0x1a3378
label_0x1a336c:
    v1 = *(int32_t*)((v0) + 8);                                 // 0x001a336c: lw $v1, 8($v0)
    a0 = a0 + 1;                                                // 0x001a3370: addiu $a0, $a0, 1
    v0 = v0 + v1;                                               // 0x001a3374: addu $v0, $v0, $v1
label_0x1a3378:
    v1 = (a0 < t0) ? 1 : 0;                                     // 0x001a3378: slt $v1, $a0, $t0
    /* nop */                                                   // 0x001a337c: nop 
    if (v1 != 0) goto label_0x1a336c;                           // 0x001a3380: bnez $v1, 0x1a336c
    /* nop */                                                   // 0x001a3384: nop 
    v0 = *(int32_t*)(v0);                                       // 0x001a3388: lw $v0, 0($v0)
label_0x1a338c:
    return;                                                     // 0x001a3390: jr $ra
    sp = sp + 0x10;                                             // 0x001a3394: addiu $sp, $sp, 0x10
}